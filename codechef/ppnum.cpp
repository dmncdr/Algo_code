#include<iostream>
#include<cmath>
#define mod 1000000007
long long int power(long long int a,long long int b){ 
				if(b==0) return 1;
				else{
					long long int d=power(a,b/2);
					return d*d*((b&1)?a:1);
					}
				}
using namespace std;
int main(){	int t;
		cin>>t;	
		while(t--){
		long long int l,r;
		cin>>l>>r;
		long long int a=log10(l)+1;
		long long int b=log10(r)+1;
		long long int ans=0;
		if(b==a) { ans=((r-l+1)*(r+l)/2)*a; cout<<ans%mod<<endl; continue;}
		else{
		long long int c1=power(10,a);		
		long long int c11=c1-l;
		long long int i=0;
		ans=((a*(c11*(l+power(10,a)-1)/2)%mod))%mod;
		for(i=a+1;i<=b-1;i++)
		{
			ans=(ans%mod + (i*(((((power(10,i)-power(10,i-1)))*((power(10,i-1)+power(10,i)-1))/2)%mod))))%mod;
			}
			
		ans=(ans%mod+(b*(((((r-power(10,b-1)+1))*(power(10,b-1)+r)))/2)%mod)%mod)%mod;		
		cout<<ans<<endl;
		}
		}
		
		return 0;
			 }
