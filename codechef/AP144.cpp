#include <iostream>
#include <cstdio>
#include<cmath>
using namespace std;
#define MAXN 100000
int t;
int main()
{
	scanf("%d",&t);
	while(t--){
		long long int  n;
		scanf("%lld",&n);
		long long int  res=0,ans=0;
	for(long long int  i=1;i<=n/2;i++)
	{	
		long long int  val=i*(n-i)-1;
		long long int  count=0,x=sqrt(val);
		for(long long int  j=1;j<=x;j++)
		count+=val/j;
		count*=2;
		count-=(x*x);
		res+=count;
			if(i==n-i)
		ans+=count;
	}
	
	printf("%lld\n",res*2-ans);
	}
	return 0;
}

