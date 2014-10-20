#include<stdio.h>
long long int addpower(long long int n,long long int m,long long int mod){
if(m==0) return 0;
else if(m==1) return n%mod;
else{
long long int ad=addpower(n,m/2,mod)%mod;
return ((ad%mod+ad%mod)%mod+(m&1?n:0)%mod)%mod;
}
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long  int  arr[10001];
		long long int res[10001];
		int i=0;
		for(i=0;i<n;i++)
			scanf("%lld",&arr[i]);
		long long int ans=0;
		long long int a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		long long add=0;
		long long mul=1;
		int end=n-1;
		char s[10001];
		scanf("%s",s);
		int j=0,x=0;
		int flag=0;
		int start=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='A'){
				if(flag==1) end--;else start++;
				add=(add%c+a%c)%c;
				arr[j]=(addpower(arr[j],mul,c)%c+add%c)%c;
				res[x++]=arr[j];
			}
			else if(s[i]=='M'){
				if(flag==1) end--;else start++;
				arr[j]=(addpower((addpower(arr[j],mul,c)+add%c)%c,b,c))%c;
				mul=addpower(mul,b,c)%c;
				add=addpower(add,b,c)%c;	
				res[x++]=arr[j];
			}
			else if(s[i]=='R'){
				if(flag==0){
					j=end;
					flag=1;
					end--;
				}
				else
				{
					j=start;
					flag=0;
					start++;
				}
			arr[j]=(addpower(arr[j],mul,c)%c+add%c)%c;
			res[x++]=arr[j];
			}
			if(flag==0) j++;
			else j--;
		}
		
		for(i=0;i<n;i++) printf("%lld ",res[i]);
		printf("\n");
	}
return 0;
}














