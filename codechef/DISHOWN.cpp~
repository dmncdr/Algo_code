#include<cstdio>
using namespace std;

long long int maxi(long long int a,long long int b){return a>b?a:b;}
long long int find(long long int a,long long int par[]){

	while(a!=par[a]){
		a=par[a];
	}
	
	return a;
}
void uni(long long int a,long long int b,long long int par[],long long int rank[],long long int pnt[],long long int parpnt[]){
	
	if(pnt[a]>pnt[b]){
		parpnt[b]=parpnt[a];
		pnt[b]=pnt[a];
	}
	else if(pnt[a]<pnt[b]){
		parpnt[a]=parpnt[b];
		pnt[a]=pnt[b];
	}
	
	if(rank[a]>=rank[b]){
		par[b]=a;
		rank[a]+=rank[b];
	}
	else {
		par[a]=b;
		rank[b]+=rank[a];
	}
	
	
		
}
		
int main(){
		long long int t;
		scanf("%lld",&t);
		while(t--){
				
				long long int s[10006],rank[10006],pnt[10006];
				long long int n;scanf("%lld",&n);
				long long int i;for(i=1;i<=n;i++) scanf("%lld",&s[i]);
				long long int par[10006],parpnt[10006];
				for(i=1 ;i<=n;i++){ par[i]=i;parpnt[i]=i;}
				for(i=1 ;i<=n;i++){ pnt[i]=s[i];rank[i]=1;}
				
				long long int q;scanf("%lld",&q);
				while(q--){				
					long long int p,x,y;scanf("%lld",&p);
					if(!p){
						scanf("%lld%lld",&x,&y);
						long long int v1=find(x,par);
						long long int v2=find(y,par);
						if(v1==v2) printf("Invalid query!\n");
						else if(pnt[v1]!=pnt[v2])uni(v1,v2,par,rank,pnt,parpnt);
					}			
					else {
						scanf("%lld",&x);
						printf("%lld\n",parpnt[find(x,par)]);
					}
				}
		}
		return 0;
}
		
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
						
					
					
				
				
