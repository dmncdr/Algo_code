#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
void* comp(void* st,void *end){
return *((int *)st-(int *)end);}
int main(){
		int t;
		scanf("%d",&t);
		while(t--){
				unsigned long long int m,p[8];
				int n;
				cin>>n>>m;
				int count=0,flag=0;
				for(int i=0;i<n;i++)
				cin>>p[i];
				qsort(p,p+n,comp);
						
			//1-->
			  if(m!=0 && n>=1){
			  for(int i=0;i<n;i++)
			  if(m==p[i]){ m=0; flag=1; break; }
			  count=1;
			  }
			  
			//2-->
			if(m!=0 && n>=2){
			for(int i=0;i<n;i++){	
					unsigned long long int k=p[i];
					for(int j=i+1;j<n;j++){
					if((k+p[j])==m){
					m=0;
					flag=1;
					break;}}
					 if(flag==1) break;
					}
	          count=2;
				 }
				 
				 
	 		//3---->
	 		if(m!=0 && n>=3){
	 				for(int i=0;i<n;i++){
	 						unsigned long long int k=p[i];
	 						for(int j=i+1;j<n;j++)
	 						{
	 							k+=p[j];
	 							for(int l=j+1;l<n;l++)
	 							if((k+p[l])==m){
	 							m=0;
	 							flag=1;
	 							break;} if(flag==1) break;} if(flag==1) break;}
	 			count=3;				
	 							}
	 							
	 		//4-->
	 		if(m!=0 && n>=4){
	 				for(int i=0;i<n;i++){
	 						unsigned long long int k=p[i];
	 						for(int j=i+1;j<n;j++)
	 						{
	 							k+=p[j];
	 							for(int l=j+1;l<n;l++)
	 							{   k+=p[l];
	 							     for(int a=l+1;a<n;a++)
	 							     if((k+p[a])==m){ m=0; flag=1; break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} count=4;}
	 							     
	 							     
	 		//5-->					     
	 			if(m!=0 && n>=5){
	 				for(int i=0;i<n;i++){
	 						unsigned long long int k=p[i];
	 						for(int j=i+1;j<n;j++)
	 						{
	 							k+=p[j];
	 							for(int l=j+1;l<n;l++)
	 							{   k+=p[l];				     
	 							     for(int a=l+1;a<n;a++){
	 							     k+=p[a];
	 							     for(int b=a+1;b<n;b++)
	 							     if((k+p[b])==m){ m=0;flag=1; break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} count =5;}
	 							     
	 							     
	 		//6-->					     
	 					if(m!=0 && n>=6){
	 				for(int i=0;i<n;i++){
	 						unsigned long long int k=p[i];
	 						for(int j=i+1;j<n;j++)
	 						{
	 							k+=p[j];
	 							for(int l=j+1;l<n;l++)
	 							{   k+=p[l];				     
	 							     for(int a=l+1;a<n;a++){
	 							     k+=p[a];
	 							     for(int b=a+1;b<n;b++)
	 							     {
	 							       k+=p[b];
	 							       for(int c=b+1;c<n;c++)
	 							     if((k+p[b])==m){ m=0; flag=1; break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} count=6;}
	 							     
	 							     
	 		//7--->
			 		
	 		
	 			if(m!=0 && n==7){
	 				for(int i=0;i<n;i++){
	 						unsigned long long int k=p[i];
	 						for(int j=i+1;j<n;j++)
	 						{
	 							k+=p[j];
	 							for(int l=j+1;l<n;l++)
	 							{   k+=p[l];				     
	 							     for(int a=l+1;a<n;a++){
	 							     k+=p[a];
	 							     for(int b=a+1;b<n;b++)
	 							     {
	 							       k+=p[b];
	 							       for(int c=b+1;c<n;c++){
	 							       k+=p[c];
	 							       for(int d=c+1;d<n;d++)
	 							     if((k+p[b])==m){ m=0; flag=1; break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} if(flag==1) break;} count=7;}
	 							     
	 							     
	 				if(m==0) printf("%d\n",count);
	 				else printf("-1\n");
	 				}
	 				return 0;}			     
	 							     
	 							     
	 							     
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 		
	 							     
	 							     		     
	 							     
	 					
	 					
	 					
	 					
	 					
	 					
	 					
	 					
	 					
	 					
	 					
	 					
	 					
	 					
	 							     
	 							     
	 							     
	 							     
	 							     
	 							     
	 							     
	 							     
	 							
	 							
	 						
	 		
	 		
	 		
	 		
	 		
	 						

