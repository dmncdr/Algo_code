#include<iostream>
#include<cstdio>
#define MAX 1000000007
using namespace std;

long long int power(long long int  a,long long int b,long long int mod) { if(b==0) return 1; long long int d=power(a,b/2,mod)%mod; return (((d*d))*(((b&1)?a:1)))%mod;} 

int main(){
			int t;
			cin>>t;
			while(t--){
			long long int up,d,m,mod;
			cin>>up>>d>>m>>mod;
			int i=0;
			long long int farr[41];

			for(i=0;i<40;i++) farr[i]=0;
								
			for(i=0;i<=up%mod;i++)
			  farr[power(i,m,mod)]+=(up/(mod))+1;
		
				for(;i<=mod && i<=up;i++)
			  farr[power(i,m,mod)]+=(up/(mod));

		int j=0,k=0;
		long long int ans=0;
				for(i=0;i<40;i++)
				for(j=0;j<40;j++)
				for(k=0;k<40;k++)
				if(((i+j+k)%mod)==m)
					ans=(ans%MAX+((farr[i]%MAX)*(farr[j]%MAX)*(farr[k]%MAX))%MAX)%MAX;

				cout<<ans<<endl;
				}
		return 0;
		}
                                
                                
				
				
				
		
