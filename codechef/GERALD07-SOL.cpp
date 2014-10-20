#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <vector>
 
 
using namespace std;
 
typedef vector < int > vi;
typedef pair< int ,int > ii;
typedef pair< ii,int> ppi;
typedef vector < ii > vii;
 
#define pb push_back
#define mp make_pair
#define l first
#define r second
#define X first
#define Y second
 
 
#define rep(i,n) for(int i=0;i<n;i++)
#define inc(i,a,n) for(int i=a;i<=n;i++)
#define dec(i,n,a) for(int i=n;i>=a;i--)
#define all(a) a.begin(),a.end()
 
#define in(n) scanf("%d",&n)
#define in2(n,m) scanf("%d%d",&n,&m)
#define in2ll(n,m) scanf("%I64d%I64d",&n,&m)
#define inll(n) scanf("%I64d",&n)
#define ins(s) scanf("%s",s)
 
#define out(n) printf("%d\n",n)
#define outll(n) printf("%I64d\n",n)
#define out2(n,m) printf("%d %d\n",n,m)
#define out2ll(n,m) printf("%I64d %I64d\n",n,m)
#define outs(s) printf("%s\n",s)
 
#define imax numeric_limits<int>::max()
#define imin numeric_limits<int>::min()
#define lmax numeric_limits<ll>::max()
#define lmin numeric_limits<ll>::min()
 
#define MAX 200005
int parent[MAX],S,rank[MAX],n,rollback_flag;
vii edges;
vector<ppi> quer;
vector<pair<int,ii> > rollbck;
int findset(int i)
{
if (parent[i] == -1)
return i;
return findset(parent[i]);
}/*
int findset(int x)
{
if(parent[x]!=x)
findset(parent[x]); // path compression
return parent[x];
}*/
int unionset(int u,int v)
{
int pu, pv,flag=0;
pu = findset(u);
pv = findset(v);
if(pu!=pv)
{
if(rollback_flag)
{
rollbck.pb(mp(pu,mp(parent[pu],rank[pu])));;
rollbck.pb(mp(pv,mp(parent[pv],rank[pv])));;
}
flag=1;
if(rank[pu]<rank[pv]) // Attach smaller rank tree under root of high rank tree(union by rank)
parent[pu]=pv;
else if(rank[pu]>rank[pv])
parent[pv]=pu;
else // if ranks are same, then make one as root and increment its rank by one
{
parent[pv]=pu;
rank[pu]++;
}
}
return flag;
}
int update(int l,int r)
{
l--;
r--;
int ans=0;
for(int i=l;i<=r;i++)
{
ans+=unionset(edges[i].X,edges[i].Y);
}
return ans;
}
void rollback()
{
int u;
for(int i=rollbck.size()-1;i>=0;i--)
{
u=rollbck[i].X;
parent[u]=rollbck[i].Y.X;
rank[u]=rollbck[i].Y.Y;
}
rollbck.clear();
}
void reset()
{
rollback_flag=0;
rollbck.clear();
for(int i=1; i<=n; i++)
{
rank[i]=1;
parent[i]=-1;
}
}
bool cmp(ppi A,ppi B)
{
//S = the max integer number which is less than sqrt(N);
if((A.X.l/S) != (B.X.l/S))
return (A.X.l/S) < (B.X.l/S);
return (A.X.r)<(B.X.r);
}
int main()
{
int t,x,y,q,m,L,r,R,z,bucket,last_bucket,prev_ans,prev_pos;
in(t);
while(t--)
{
edges.clear();
quer.clear();
in2(n,m);
in(q);
reset();
inc(i,0,m-1)
{
in2(x,y);
edges.pb(mp(x,y));
}
inc(i,0,q-1)
{
in2(x,y);
quer.pb(mp(mp(x,y),i));
}
int res[q+1];
S=floor(sqrt(n));
sort(quer.begin(),quer.end(),cmp);
rollback_flag=1; //snapshot()
for(int i=0;i<q;i++)
{
if((quer[i].X.Y-quer[i].X.X+1)<=S+1) // we process light queries
{
res[quer[i].Y]=n-update(quer[i].X.X,quer[i].X.Y);
rollback(); // rollback()
}
}
rollback_flag=0;
last_bucket=-1;
for(int i=0;i<q;i++)
{
L=quer[i].X.X;
R=quer[i].X.Y;
if(R-L+1<=S+1)
continue;
y=0;
bucket=L/S;
if(bucket!=last_bucket)
{
reset();
r=R;
y+=update((bucket+1)*S,R);
last_bucket=bucket;
}
else
{
y+=prev_ans;
r=quer[prev_pos].X.Y;
r++;
y+=update(r,R);
}
prev_pos=i;
prev_ans=y;
rollback_flag=1; //snapshot()
z=(bucket+1)*S-1;
y+=update(L,z);
rollback(); // rollback()
rollback_flag=0;
res[quer[i].Y]=n-y;
}
for(int i=0;i<q;i++)
out(res[i]);
}
return 0;
}
