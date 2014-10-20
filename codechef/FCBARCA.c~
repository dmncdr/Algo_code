#include<stdio.h>
#define mod 1000000007


 long long int power(  int a,  long long int b){
	if(b==0) return 1;  long long int c=power(a,b/2); return (((c*c)%mod)*((b&1)?a:1)%mod)%mod;}



int main(){
		int t;
		scanf("%d",&t);
		while(t--){
				 long long n,ans=0,i=0,j=0;
				 int k;
				scanf("%lld%d",&n,&k);
				for(i=n-1;i>=1;i--)
				{
					if(j%2==0)
					ans=(ans%mod+power(k,i)%mod)%mod;
					else 
					ans=(ans%mod-power(k,i)%mod+mod)%mod;
					j++;}
				printf("%lld\n",ans);
				}
			return 0;}	
						
					
	
		
