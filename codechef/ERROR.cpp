#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char s[1000000];
		scanf("%s",s);
		int l=strlen(s);
		int chk=0;
		int i=0;
		char a=s[0],b=s[1],c=s[2];
		for(i=3;i<=l;i++){
	   	 if((a=='1' && b=='0' && c=='1') || (a=='0' && b=='1' && c=='0'))
	   	 {
			chk=1; break;}
			else{	a=b;
					b=c;
					c=s[i];
					
						 }}
						 
			if(chk==1) cout<<"Good"<<endl;
			else cout<<"Bad"<<endl;
	}
return 0;
}
			
