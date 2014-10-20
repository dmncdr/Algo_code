#include<stdio.h>

int p[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int a[25][100005], b[25][101];
long long mod;

long long power(int a, int b)
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	long long p=power(a,b/2);
	if(b&1)
		return (((p*p)%mod)*a)%mod;
    else
        return (p*p)%mod;
}

int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<101;i++)
		{
		int l=i;
		j=0;
		while(l>1)
			{
			if(!(l%p[j]))
				{
				b[j][i]++;
				l/=p[j];
				}
			else
				j++;
			}
		}
	for(i=1;i<=n;i++)
		{
		int l;
		scanf("%d",&l);
		for(j=0;j<25;j++)
			a[j][i]=a[j][i-1]+b[j][l];
		}
	int t;
	scanf("%d",&t);
	for(;t--;)
		{
		int l,m;
		long long r=1;
		scanf("%d%d%lld",&l,&m,&mod);
		for(j=0;j<25;j++)
			r=(r*power(p[j],a[j][m]-a[j][l-1]))%mod;
		printf("%lld\n",r);
		}
	return 0;
}
