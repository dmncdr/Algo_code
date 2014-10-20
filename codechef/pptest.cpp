#include<iostream>
int maxi(int a,int b){ return (a>b)?a:b;}
using namespace std;
int dp[1002][1002];
		int main(){
				int t;
				cin>>t;
				int i=0,j=0;
				while(t--){
						for(i=0;i<1001;i++) for(j=0;j<1001;j++) dp[i][j]=0;
				int n,w;
				cin>>n>>w;
				int c[1002];
				int p[1002];
				int t[1003];
				int v[1003];
								
				for(i=1;i<=n;i++) cin>>c[i]>>p[i]>>t[i];
				for(i=1;i<=n;i++) v[i]=c[i]*p[i];
				for(i=0;i<=n;i++) { dp[0][i]=0; dp[i][0]=0;}
				for(i=1;i<=n;i++){
					for(j=1;j<=w;j++){ 
								if(t[i]>j) dp[i][j]=dp[i-1][j];
								else {
									dp[i][j]=maxi((dp[i-1][j-t[i]]+v[i]),dp[i-1][j]);
									}
							}
				}	
					cout<<dp[n][w]<<endl;
					}
			return 0;}	
						
					
					
