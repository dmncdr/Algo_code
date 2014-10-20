#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){

		int t;
		cin>>t;
		while(t--){
				long double arr[10001];
				int n; cin>>n;
				int i,j,k,l,m;
				for(i=0;i<n;i++) cin>>arr[i];
				long double sum1=0,sum2=0,diff=0,ans=0;	
				for(i=0;i<n;i++){
					sum1=0;
				for(j=i;j<n;j++){
					sum1+=arr[j];
				for(k=j+1;k<n;k++){
					sum2=0;
				for(l=k;l<n;l++){ 
						sum2+=arr[l];
						 diff=fabs(sum1-sum2);
						 if(ans<diff) ans=diff;}}}}
						
						printf("%.0Lf\n",ans);
						}
						return 0;}
						 
				 
						 
				                  
							
						
									
				
