#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<cstring>
#define max 40001
using namespace std;	
int main(){
			int t;
			cin>>t;
			while(t--){
					char A[max],B[max];
					cin>>A>>B;
					int l1=strlen(A);
					int l2=strlen(B);
										
					 strcat(A,B);
					
					int i=0,j=0,k=0; 
					 int ltr[26],ltr1[26];
					 for(i=0;i<26;i++){
					 ltr[i]=0;
					 ltr1[i]=0;}
					 
					 for(i=0;i<l1+l2;i++)
					 ltr[A[i]-'a']++;
			
					int n;
					cin>>n;
					
				
				
					for(i=0;i<n;i++){
				char str[max];
		//	char* str=(char *) malloc(20001*sizeof(char));
					cin>>str;
					
					int ln=strlen(str);
					
					for(j=0;j<ln;j++)
					ltr1[str[j]-'a']++;

					//free(str);
					}
					
					
				
				int flag=0;
					for(i=0;i<26;i++)
					{
					if(ltr[i]<ltr1[i]){
					  flag=1;
					  break;}}
					  
				
				if(flag==0)
				printf("YES\n");
				else printf("NO\n");
						}
						return 0;}
						
						
											
