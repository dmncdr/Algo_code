#include<iostream>
#include<cstdio>
#include<algorithm>
#define mod 1000000
#include<cstdlib>
#include<string.h>
#define getcx getchar_unlocked
using namespace std;
//fast input.............................................
//.......................................................
 long long int  arr[3000003], n,a,b,c,d,i,t,hash[1000006];
int main(){
	scanf("%lld",&t);
	while(t--){
	//	inp(n);inp(a);inp(b);inp(c);inp(d);
	scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&c,&d);
		arr[0]=d;
		for(i=1;i<n;i++)
			arr[i]=((arr[i-1]*(a*arr[i-1]+b))+c)%mod;
		memset(hash,0,sizeof(hash));
		for(i=0;i<n;i++) hash[arr[i]]++;
		
	 long long  val1=0,val2=0,diff=0,j=0;
		for(i=999999;i>=0;i--){
			if(hash[i]>0){
				if((hash[i]&1)==1){ if(j==0){ diff+=i; j=1;}  else { diff-=i;j=0;}}
			}
		}
		
		if(diff>0)
		printf("%lld\n",diff);
		else { diff=-diff; printf("%lld\n",diff);}
	}
	return 0;
}
