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
				int i=0;int q[1001];
				for(i=0;i<1001;i++) q[i]=0;
				
				int ans=0;
				int j=0;				
				  for(i=0;i<m;i++){
					int c;
					scanf("%d",&c); q[c]++;}


				             for(i=0;i<n;i++){
							       int temp[101];
								int m1;
								scanf("%d",&m1);
							         for(j=0;j<m1;j++) scanf("%d",&temp[j]);

								sort(temp,temp+m1,greater<int>());
								
					
								for(j=0;j<q[i];j++){
								if(m1>0){
								ans+=temp[j];
							         m1--;					}
						}
								}
				
								
				

			
						printf("%d\n",ans);}
						
						return 0;		
								}

									
					
									
						
					
							
				
				
