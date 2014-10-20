#include<iostream>
    #include<vector>
    #define MOD 1000000007
    using namespace std;
    int rank[100007],P[100007];
     
     
     
    int Find(int n)
    {
    while(P[n]!=n)
    n=P[n];
    return n;
    }
     
    void uni(int x,int y)
    {
    if(rank[x]>=rank[y]){
    P[y]=x;
    rank[x]+=rank[y];
    }
    else{
    P[x]=y;
    rank[y]+=rank[x];
    }
    }
     
     
    int main()
    {
    int x,y;
    int t,n,m;
    cin>>t;
    while(t--)
    {
    int count=0;
    cin>>n>>m;
    long long int a[n],mul=1;
     
    for(int i=1;i<=n;i++)
    {
    rank[i]=1;
    P[i]=i;
    a[i]=0;
    }
    for(int i=1;i<=m;i++)
    {
    cin>>x>>y;
    int k,s;
    s=Find(x);k=Find(y);
    if(s!=k)
    uni(s,k);
    }
    for(int i=1;i<=n;i++)
    P[i]=Find(P[i]);
    for(int i=1;i<=n;i++){
    a[P[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
    if(a[i]!=0){
    mul=(mul%MOD*a[i]%MOD)%MOD;
    count++;}
    }
    cout<<count%MOD<<" "<<mul%MOD<<endl;
    }
    }
