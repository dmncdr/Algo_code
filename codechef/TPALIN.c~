#include<stdio.h>
#include<math.h>
#define mod 1000000007
unsigned long long int power(unsigned long long int a,unsigned long long int b) { if(b==0) return 1; unsigned long long int x=power(a,b/2);
return (((x*x)%mod)*((b&1)?a:1))%mod;}
	int main(){
		int t;
		scanf("%d",&t);
		while(t--){
				 int n;
				  long long int ans;
				 scanf("%d",&n);
				 if(n==1) printf("26\n");
				 else if(n==2) printf("52\n");
				 else{
				 	ans=52;
				 	if(n&1)
				 		ans=(ans+power(26,n/2+1))%mod;
				 		n=n-2;
				 	ans=(ans+(1352*(((power(26,n/2)-1)%mod)*(power(25,mod-2)%mod)%mod)%mod))%mod;
				 printf("%lld\n",ans);
				 }
				 }
				 return 0;}		
