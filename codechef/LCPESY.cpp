#include<iostream>
#include<cstdio>
#include<string.h>
int mini(int x,int y){ return (x<y)?x:y;}

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int i;
		char s1[10001],s2[10001];
		scanf("%s",s1);
		scanf("%s",s2);
		int l1=strlen(s1);
		int l2=strlen(s2);
		int   hash1[62],hash2[62];
		memset(hash1,0,sizeof(hash1));memset(hash2,0,sizeof(hash2));
		for(i=0;i<l1;i++){
		if(s1[i]>='a' && s1[i]<='z') hash1[s1[i]-'a']++;
		else if(s1[i]>='A' && s1[i]<='Z') hash1[s1[i]-'A'+26]++;
		else { hash1[s1[i]-'0'+52]++;}
		}
		for(i=0;i<l2;i++){
		if(s2[i]>='a' && s2[i]<='z') hash2[s2[i]-'a']++;
		else if(s2[i]>='A' && s2[i]<='Z')hash2[s2[i]-'A'+26]++;
		else{ hash2[s2[i]-'0'+52]++;}
		}
		
		int ans=0;
		for(i=0;i<62;i++){ 
		ans=ans+mini(hash1[i],hash2[i]);}
		cout<<ans<<endl;
	}	
	return 0;
}
		
