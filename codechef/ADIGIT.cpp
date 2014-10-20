#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	int n,m,i;
	scanf("%d%d",&n,&m);
	
	char a[100003];
	scanf("%s",a+1);
	int j=0;
	int hash[100003][10];
	memset(hash,0,sizeof(hash));
	
	 hash[1][a[1]-'0']++;
	
	for(i=2;i<=n+1;i++){
		if(i!=n+1) hash[i][a[i]-'0']++;
		for(j=0;j<10;j++)
		hash[i][j]+=hash[i-1][j];
	}
	
	for(i=0;i<m;i++){
		int p,ans=0;
		scanf("%d",&p);
		int val=a[p]-'0';
		int j=0;
		for(j=0;j<10;j++){
			int tmp=hash[p-1][j]*val-j*hash[p-1][j];
			if(tmp<0) tmp=-tmp;
			
			ans+=tmp;
		}
		
		printf("%d\n",ans);
	}
	
	return 0;
}	
	
			
	
		
		
		
	
