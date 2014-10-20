#include<stdio.h>
#include<string.h>
int main(){
		int t;
		scanf("%d",&t);
		while(t--){
				char ch[1000];	
				char hs1[26],hs2[26];
				int i=0;
				for(i=0;i<26;i++)
				{ hs1[i]=0;hs2[i]=0;}
				scanf("%s",ch);
				int n=strlen(ch);
				 for(i=0;i<n/2;i++){
				   hs1[ch[i]-'a']++;
				   hs2[ch[n-i-1]-'a']++;}
			int st=1;
			
			//for(i=0;i<26;i++)	
			//printf("%d %d           ",hs1[i],hs2[i]);
				for(i=0;i<26;i++)
				{ if(hs1[i]!=hs2[i])
				  {printf("NO\n"); st=0; break;}}
			if(st==1) printf("YES\n");}
			return 0;} 
			
				 

