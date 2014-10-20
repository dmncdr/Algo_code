#include<stdio.h>
#define max 3001
int a[max][max];
int main(){	
		int t;
		scanf("%d",&t);
		while(t--){
				int n,m,k,j;
				scanf("%d%d%d",&n,&m,&k);
				int i=0,s,d;
				for(i=0;i<m;i++)
				{scanf("%d%d",&s,&d);
				 a[s][d]=1;a[d][s]=1;}
				 long int ans=0;
				for(i=0;i<n;i++){
				int count=0;
				for(j=0;j<n;j++)
				{
					if(a[i][j]>0)
					count++;}
					if(count>1)
					ans++;}
				ans=ans*k;	
				printf("%ld\n",ans);
				} 
				return 0;}
										
				 
				 			
