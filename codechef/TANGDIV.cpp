#include<stdio.h>
#include<stdlib.h>

int fun(const void *x,const void *y){
	return *(int*)x-*(int*)y;
}

int tron[502],trob[502],prob[502],prot[502];
int k,p;

int search(int z)
{
	int i;
	for(i=0;i<k;i++)
		if(tron[i]==z)
			return 1;
	return 0;
}
int khoj(int z)
{
	int i;
	for(i=0;i<k;i++)
		if(trob[i]==z)
			return 1;
	return 0;
}
int t,n,c,i;
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&k,&p);
		for(i=0;i<k;i++)
			scanf("%d %d",&tron[i],&trob[i]);
		for(i=0;i<p;i++)
			scanf("%d %d",&prob[i],&prot[i]);
		qsort(tron,k,sizeof(int),fun);
				qsort(trob,k,sizeof(int),fun);
		qsort(prob,p,sizeof(int),fun);
				qsort(prot,p,sizeof(int),fun);
				c=0;
			for(i=0;i<p;i++){
				if(search(prob[i])==0){
						c=1;
					break;
					}
		}
			if(!c){
				for(i=0;i<p;i++){
					if(khoj(prot[i])==0){
						c=1;
						break;
						}
				}
				}
			if(c==1)
					printf("No\n");
				else
			printf("Yes\n");
					}
			return 0;
}
