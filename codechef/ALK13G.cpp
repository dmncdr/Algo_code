#include<stdio.h>
#include<stdlib.h>
long long int  a[100002];
long long int  main(){
		long long int  t;
		scanf("%lld",&t);
		while(t--){
				long long int  n;
				scanf("%lld",&n);
				long long int  sum=0;
				long long int  i=0,d;
				
				for(i=0;i<n;i++){ scanf("%lld",&d); a[i]=-d; sum+=a[i];}
					long long int  tmp=0;
					long long int  ans=0;
					
					for(i=0;i<n;i++)
					{
						tmp+=a[i];	
						if(tmp<0){tmp=0;}
						if(ans<tmp) ans=tmp;
					}
					printf("%lld\n",abs(2*ans-sum));
					}
		return 0;}
				
