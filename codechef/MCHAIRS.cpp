#include<iostream>
#define mod 1000000007
#include<cstdio>
using namespace std;
long long int power(long long int a,long long int b){
	if(b==0) return 1;
	else {
		long long int d=power(a,b/2)%mod;
		return (((d*d)%mod)*(b&1?a:1)%mod)%mod;
	}
}


int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int ans=power(2,n);
		ans=ans-1;
		if(ans>0) cout<<ans<<endl;
		else{ ans+=mod; cout<<ans<<endl;}
	}
	return 0;
}
