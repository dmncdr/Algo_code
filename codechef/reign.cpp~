#include<iostream>
#include<stdio.h>
#include<string.h>
#define MAX 100005

using namespace std;

 long  long int maxi(long  long int a, long  long int b){
								return a>b?a:b; 
							}

int main(){
		
				long  long int t;
				cin>>t;
				while(t--){
					long  long int  maxarr1[MAX];
					long  long int  maxarr2[MAX];
					long  long int  arr[MAX];
					long  long int n,k;
					long  long int i=0;
					cin>>n>>k;
					for(i=0;i<n;i++)  cin>>arr[i];
					maxarr1[0]=arr[0];
					long  long int max_border=arr[0];
					long  long int maxo=arr[0];
				for(i=1;i<n;i++){
			
							if(max_border<0) max_border=arr[i];
							 else max_border+=arr[i];
							if(max_border>maxo) maxo=max_border;
							maxarr1[i]=maxo;				
					}

			       max_border=arr[n-1];
			       maxo=arr[n-1];
				maxarr2[n-1]=arr[n-1];
			       for(i=n-2;i>=0;i--){
					if(max_border<0) max_border=arr[i];
					else max_border+=arr[i];
					if(max_border>maxo) maxo=max_border;
					maxarr2[i]=maxo;
				}
		 
			//for(i=0;i<n;i++) printf(" %lld",maxarr1[i]);
			//printf("\n");
			//for(i=0;i<n;i++) cout<<" "<<maxarr2[i]<<endl;
			//printf("\n");
					long long int j=k+1; i=0;
					long long int ans=maxarr1[i]+maxarr2[j];
			while(1){
				 ans=maxi(ans,(maxarr1[i]+maxarr2[j]));
				i++; j++;
				if(j>n-1) break;
					}
				cout<<ans<<endl;
			}
			return 0;}

			 
					
				
								
							
			
								
					
