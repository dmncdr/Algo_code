#include<stdio.h>
int main(){
		int t;
		scanf("%d",&t);
		while(t--){
				int n,k,i;
				scanf("%d%d",&n,&k);
				if(k<=n/2)
				{
					for(i=1;i<=k;i++)
					printf("%d ",2*i);
					printf("\n");}
				else printf("-1\n");
				}
				return 0;
				}
