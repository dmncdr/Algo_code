#include<stdio.h>
float  dp[101][10001];
int main(){
		int t;
		scanf("%d",&t);
		while(t--){
		                int a[101];
		                float p[101];
				int n;
				int i=0;
				scanf("%d",&n);
				int  sc;
				int sum=0;
				for(i=1;i<=n;i++){ scanf("%d",&a[i]); sum+=a[i];}
				for(i=1;i<=n;i++){ scanf("%d",&sc); p[i]=(sc*1.000)/100;}
				
				
				
				
				
				
				for(i=0;i<=10001;i++)
				dp[0][i]=0;
				dp[0][0]=1;
				int j;
				
				for(i=1;i<=n;i++){ 
						  for(j=0;j<=sum;j++)
						  	{
						  	dp[i][j]=dp[i-1][j]*(1-p[i]);
						  	if(j-a[i]>=0)
						  	dp[i][j]+=dp[i-1][j-a[i]]*(p[i]);}
						  	
						  }
				float ans=0;
				int v=(sum%2==0)?sum/2:sum/2+1;
				
					for(i=v;i<=sum;i++)
					ans+=dp[n][i];
					
					printf("%.7f\n",ans);
					}
					return 0;}
					
							  
						  
				
							
									
					
				
