#include<stdio.h>
#include<string.h>
#define max 100003
int main(){	
		int t;
		scanf("%d",&t);
		while(t--){
				int a[max];
				memset(a,0,sizeof(a));
				int n,c,q;
				scanf("%d%d%d",&n,&c,&q);
				int i;
				a[c]=1;
				
				int x,y;
				while(q--){
				 scanf("%d%d",&x,&y);
				  if(c<=(x+y)/2){
				  	int k=c-x;
				  	a[c]=0;
				  	c=y-k;
				  	a[c]=1;}
				  	else { int k=y-c;
				  	a[c]=0;
				  	c=x+k;
				  	a[c]=1;}
				  	
				   }
				   
				  
				  
				 	
						
				for(i=1;i<=n;i++)
				if(a[i]) printf("%d\n",i);
				}
				return 0;}
						
						
						
