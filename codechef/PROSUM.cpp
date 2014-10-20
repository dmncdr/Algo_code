#include<iostream>
#include<cstdio>
using namespace std;
 int   main(){
	long  long int   t;
	scanf("%lld",&t);
	while(t--){
		long long int i, a[1000001], n;
	scanf("%lld",&n);
		for(i=0;i<n;i++) scanf("%lld",&a[i]);
//		sort(a,a+n);
	long 	 long int   zero=0,one=0,two=0;
		for(i=0;i<n;i++){
			if(a[i]==0) zero++;
			else if(a[i]==1) one++;
			else if(a[i]==2) two++;
		}
		long long  int v=n-zero-one;
		long long int ans=(v*(v-1))/2;
		ans=ans-(two*(two-1)/2);
		printf("%lld\n",ans);
	}
	return 0;
}
		
		
	
