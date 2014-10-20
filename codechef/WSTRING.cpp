#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
#define lim 26
int max_arr(int arr[]){ int max=arr[0]; for(int i=0;i<26;i++){ if(max<arr[i]) max=arr[i];} return max;}
int main(){
		int  t;
		cin>>t;
		while(t--){
				char arr[10001];
				int  ch[10001][26];
				scanf("%s\n",arr);
				int rep=0,i;
				int n=strlen(arr);
				for(i=0;i<10001;i++) for(int j=0;j<26;j++) ch[i][j]=0;
				for(i=0;i<n;i++){ if(arr[i]!='#') rep++;}
				int j=0;
				for(i=0;i<rep;i++)
				{
					for(;j<n;j++){ if(arr[j]!='#')ch[i][arr[j]-'0']++; else { j++;break;}}
					
				}
				
				return 0;}	
				
				 
					
					
					
					
					
				
