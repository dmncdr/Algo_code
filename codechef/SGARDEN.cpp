#include<cstdio>
#include<string.h>
#include<cmath>
#define mod 1000000007
using namespace std;
bool p[1001];
long long int pr[1001];

long long int seive(){
	long long int  k=0,i;
	for(i=0;i<1000;i++) p[i]=false;
	 long long int x=sqrt(1000);
	for(i=3;i<=x;i+=2){
		if(!p[i]){
			for(long long int j=i*i;j<=1000;j+=2*i)
				p[j]=true;
		}
	}
	pr[k++]=2;
	for(i=3;i<=1000;i+=2){ if(p[i]==false){pr[k++]=i;}}
	return k;
}
long long int power(long long int a,long long int b){if(b==0) return 1; long long int d=power(a,b/2)%mod; return ((d*d)%mod*(b&1?a:1)%mod)%mod;}

long long int find(long long int a[],long long int i,long long int visit[]){
	long long int cn=1;
	long long int x=a[i];
	visit[i]=1;
	while(i!=x){
		visit[x]=1;
		x=a[x];
		cn++;
	}
	return cn;
}

 int main(){
 	int kk=seive();
 
	long long int t;
	scanf("%lld",&t);
	
	while(t--){
		long long int n,a[100009],val[100009],visit[100009];
		memset(visit,0,sizeof(visit));
		
		long long int i=0,j=0;
		scanf("%lld",&n);
		
		for(i=1;i<=n;i++) scanf("%lld",&a[i]);
		
		for(i=1;i<=n;i++){
			if(!visit[i])
				val[j++]=find(a,i,visit);
		}
		
		long long int hash[100009];
		memset(hash,0,sizeof(hash));
		
			
			for(long long int jj=0;jj<j;jj++){
				for(long long int ii=0;(ii<kk)&&(pr[ii]<=(long long int)sqrt(val[jj]));ii++){
					long long int c=0;
					while(val[jj]%pr[ii]==0){
						val[jj]/=pr[ii];
						c++;
					}
				    if(hash[pr[ii]]<c)hash[pr[ii]]=c;
			    }
				if(val[jj]>1 && hash[val[jj]]==0)
					hash[val[jj]]=1;
		    }
			
		long long int ans=1;
		for(int i=2;i<100001;i++){
			if(hash[i]){
				ans=(ans*power(i,hash[i]))%mod;
			}
		}

		printf("%lld\n",ans);
	}
	
	return 0;
}
			
		
		
		
		
		

