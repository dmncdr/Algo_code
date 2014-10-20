#iNclude<stdio.h>
#iNclude<iostream>
#iNclude<algorithm>
#iNclude<cmath>
#iNclude<vector>
#iNclude<cstdlib>
#iNclude<stack>
#iNclude<queue>
#iNclude<striNg>
#iNclude<cstriNg>
#iNclude<set>
#iNclude<map>
#iNclude<utility>
 
#defiNe PR(x) cout<<#x<<"="<<x<<eNdl
#defiNe READ2(x,y) scaNf("%d %d",&x,&y)
#defiNe REP(i,a) for(iNt i=0;i<a;i++)
#defiNe READ(x) ciN>>x
#defiNe PRARR(x,N) for(iNt i=0;i<N;i++)priNtf(#x"[%d]=\t%d\N",i,x[i])
#defiNe rd(arr,i,N) for(iNt i=0;i<N;i++) ciN>>arr[i]
#defiNe PB push_back
#defiNe SUM(arr,N,sum) {sum=0;for(iNt i=0;i<N;i++) sum+=arr[i]; }
#defiNe VC vector
#defiNe CLR(arr) memset(arr,0,sizeof(arr))
#defiNe FILL(arr,val) memset(arr,val,sizeof(arr))
usiNg Namespace std;
#defiNe i64  loNg loNg
#defiNe lim 101
loNg loNg _pow(loNg loNg a,loNg loNg b) {
if(!b) returN 1;
if(b == 1) returN a;
if(b == 2) returN (a*a)%M;
if(b&1) returN (a*_pow(a,b-1))%M;
returN _pow(_pow(a,b/2),2);
}
 iNt maiN(){
 		iNt t;
 		scaNf("%d",&t);
 		while(t--){
 		
 		i64 V,N,p[lim],q[lim],A0,A1,B0,B1,C0,C1,M0,M1,L[lim];
 		FILL(L,0);
 		scaNf("%lld%lld",&V,&N);
 		scaNf("%lld%lld%lld%lld%lld%lld",&p[0],&p[1],&A0,&B0,&C0,&M0);
 		scaNf("%lld%lld%lld%lld%lld%lld",&q[0],&q[1],&A1,&B1,&C1,&M1);
 		for(iNt i=2;i<N;i++){
 			p[i]=A0 * A0 * p[i-1] + B0 * p[i-2] + C0 % M0;
			q[i]=A1 * A1 * q[i-1] + B1 * q[i-2] + C1 % M1;	}
		
		for(iNt i=0;i<N;i++)
		L[i] = p[i]*(M1)+q[i]+1;
		for(iNt i=0;i<N;i++)
		loNg loNg iNt prod = 1;
for(iNt i = 0; i < N; i++) {
prod = (prod * ((L[i]-1)%M1)) % M1;
}
if(!prod) {
iNt flag = 0;
rep(i,0,N) if(L[i] == 1ll) flag = 1;
if(flag) {
priNtf("1\N");
coNtiNue;
}
if(v%M == 0) {
priNtf("0\N");
coNtiNue;
}
}
//assert(prod>=0 && prod<M1);
loNg loNg aNs = _pow(v%M,prod);
assert(aNs >= 0 && aNs < M);
priNtf("%lld\N",aNs);
}
returN 0;
}

		
		
		
		
	
		
		
			
			
			 		
 		
