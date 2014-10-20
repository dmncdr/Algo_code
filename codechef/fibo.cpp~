#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<utility>
#include<climits>
#include<cstdlib>
#include<algorithm>
#include<map>
using namespace std;
#define mod 1000000007
int a[24];
long long dp[24][1001];
long long cal(int i,int n)
{
	if(i==24)
	cout<<i<<" "<<n<<endl;
	if(n<0)
	return 0;
	if(n==0)
	return 1;
	else if(dp[i][n])
	return dp[i][n];
	int j;
	for(j=1;j<=24;j++)
	if(j!=i)
	dp[i][n]=(dp[i][n]+cal(i,n-a[j]))%mod;
	return dp[i][n];
}
int main()
{
	int i,t,n,k,j;
	a[1]=1;
	a[2]=2;
	for(i=3;i<25;i++)
	a[i]=a[i-1]+a[i-2];	
	for(i=1;i<=24;i++)
	{
		for(j=1;j<=1000;j++)
		long long x=cal(i,j);
		cout<<i<<endl;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(i=1;i<=24;i++)
		if(k==a[i])
		break;
		cout<<i<<endl;
		printf("%lld\n",dp[i][n]);
	}
	return 0;
}
