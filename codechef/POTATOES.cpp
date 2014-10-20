#include<cstdio>
#include<cstdlib>
#include<cmath>
#define i64 unsigned long long

int p[100000],prime[100000];
void seive(){ 
	int i=0;int x=sqrt(100000);
	for(i=3;i<=x;i+=2){
		if(!p[i]){ int j=0;
			for(j=i*i;j<=100000;j+=2*i)
				p[j]=1;
	    }
	}
	p[0]=1;p[1]=1;
	for(i=4;i<=100000;i+=2) p[i]=1;
}

int hash[100000];	
int main(){
	seive();int i;int cnt=0;
	for(i=0;i<=100000;i++) if(!p[i]){ prime[cnt++]=i;}
	int t;
	scanf("%d",&t);
	while(t--){
		int x, y;
		scanf("%d%d",&x,&y);
		int ad;
		ad=x+y;
		int i=0;
		for(i=ad+1;i<100000;i++){
			if(!p[i]) break;
		}
		printf("%d\n",i-ad);
	}
	return 0;
}
	
