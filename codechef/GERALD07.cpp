#include<cstdio>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int t,n,m,q,i,par[200001],rank[200001];
vector<pair< pair<int,int>,int>> vec;
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d",&n,&m,&q);
		for(i=1;i<=m,i++)
		{
			int src,dest; scanf("%d%d",&src,&dest); vec.push_back(make_pair(make_pair(src,dest),i));
		}
		for(i=1;i<=q;i++){
			int n1,n2;scanf("%d%d",&n1,&n2);
			
		
