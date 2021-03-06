#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
#define RANGE 100400

int *CON0[9666],*CON1[9666],*CON2[9666];
char a[RANGE];
vector<int> vec[9666],vec1[9666],REP[RANGE];
int arr[RANGE],l[RANGE],PFACT[7][RANGE];
int maxi(int x,int y){return (x>y)?x:y;}
int inp()
{
	int n = 0;
	char c = getchar_unlocked();
	while( c < '0' || c > '9' )
		c = getchar_unlocked();
	while( !(c < '0' || c > '9') ){
		n = (n << 3) + (n << 1) + c - '0';
		c = getchar_unlocked();
	}
	return n;
}

void sieve()
{
	int i,j,c,p=0,t,n;
	for(i=2;i<100100;i++){ if(!a[i]){ PFACT[l[i]++][i]=p; c=i+i;
			while(c<=100100){
				a[c]=1;
				PFACT[l[c]++][c]=p;
				c+=i;
				}p++;
			}
	}
}
void build(int node,int i,int st,int end)
{
	if(st==end){ CON0[i][node]=vec[i][st]; CON1[i][node]=vec1[i][st]; CON2[i][node]=vec1[i][st]; return; }
	else{
		build(2*node,i,st,(st+end)/2);
		build(2*node+1,i,(st+end)/2+1,end);
		CON0[i][node]=maxi(CON0[i][2*node],CON0[i][2*node+1]);
		CON1[i][node]=CON1[i][2*node];
		CON2[i][node]=CON2[i][2*node+1];
		return;
	}
}	
int query(int node,int w,int i,int j){
	int x,y;
	if(i<CON1[w][node]) 	i=CON1[w][node];
	if(j>CON2[w][node])     j=CON2[w][node];
	if(i==CON1[w][node] && j==CON2[w][node])
		return CON0[w][node];
	if(j<CON1[w][node] || i>CON2[w][node])
		return -1;
	x=query(2*node,w,i,j);
	y=query(2*node+1,w,i,j);
	return maxi(x,y);
}
int find(int ans,int xx,int yy)
{
	int c=0;
	vector<int> :: iterator it1,it2;
	it1=lower_bound(REP[ans].begin(),REP[ans].end(),xx);
	it2=upper_bound(REP[ans].begin(),REP[ans].end(),yy);
	c=(it2-REP[ans].begin())-(it1-REP[ans].begin());
	return c;
}

int main()
{
	
	sieve();
	int i,j,n,m,y,z;
	n=inp();
	m=inp();
	for(i=0;i<n;i++){ arr[i]=inp(); z=arr[i]; REP[z].push_back(i);
		for(j=0;j<l[z];j++){ y=PFACT[j][z];		vec[y].push_back(z);	vec1[y].push_back(i); }
	}
	for(i=0;i<9600;i++){
		z=vec[i].size();
		if(z>0){
			CON0[i]=(int *) malloc(4*z*sizeof(int));
			CON1[i]=(int *) malloc(4*z*sizeof(int));
			CON2[i]=(int *) malloc(4*z*sizeof(int));
			build(1,i,0,z-1);
		}
	}
	for(i=0;i<m;i++){
		int G,X,Y,w,tmp,ans=-1;
		scanf("%d %d %d",&G,&X,&Y);
		for(j=0;j<l[G];j++){
			w=PFACT[j][G];
			if(vec[w].size()==0)
				tmp=-1;
			else
				tmp=query(1,w,X-1,Y-1);
			if(tmp>ans)
				ans=tmp;
		}
		if(ans==-1){ printf("-1 -1\n");	continue; }
		int cnnt=find(ans,X-1,Y-1);
				printf("%d %d\n",ans,cnnt);
	}		
	return 0;
}
	
		
	
	
	
