#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d%d",&n,&m);
		int i=0;
		int grp[101][101];
		memset(grp,0,sizeof(grp));
		for(i=0;i<m;i++)
		{
			int a,b;
			scanf("%d%d",&a,&b);
			grp[a][b]=1;
			grp[b][a]=1;
		}
		if(n&1)
	if(isone(grp,0,
		
			
			
