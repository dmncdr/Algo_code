#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long int x,y;
		scanf("%lld%lld",&x,&y);
		if(x<0) x=-x;if(y<0) y=-y;
		long long int ans=0;
		ans=x+y-fabs(x-y);
		if(x>y){
			long long int val=(x-y)/2;
				if((x-y)&1) val+=1;
				val=2*val;
				ans=ans+val+(x-y);
		}
		else if(x<y){
			if(y-x==1) ans+=1;
			else{
				long long int val=(y-x-1)/2;
				if((y-x-1)&1) val+=1;
				val=2*val;
				ans=ans+(y-x)+val;
				}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
