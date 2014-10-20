#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main(){
		int t;
		scanf("%d",&t);
		while(t--){
				int n,m;
				scanf("%d%d",&n,&m);
				int i=0;
				int q[1001];
				for(i=0;i<m;i++)
				scanf("%d",&q[i]);

				int room[101][101];
				int j=0;
				int ans=0;
				int siz[101];
				for(i=0;i<n;i++){
					
					int m1;
					scanf("%d",&m1);
					siz[i]=m1;
					int temp[10001];
						for(j=0;j<m1;j++)
							scanf("%d",&temp[j]);
							sort(temp,temp+m1);
							for(j=0;j<m1;j++) room[i][j]=temp[j];
					         }

					         
					       for(i=0;i<m;i++){
								   ans+=room[q[i]][siz[q[i]-1]];
				 			 										siz[q[i]]--;						
								   
								}
								
								
								
						printf("%d\n",ans);}
						
						return 0;		
								}

									
					
									
						
					
							
				
				
