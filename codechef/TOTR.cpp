#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
		int t;
		cin>>t;
				char ht[27];
				char M[27];
				scanf("%s",M);
				strcpy(ht,M);
				while(t--){
						int i;
						char ch[101];
						scanf("%s",ch);
						int l=strlen(ch);
						for(i=0;i<l;i++){
								  if((ch[i]-'a') < 0){
								
								  if(ch[i]=='_')
									cout<<' ';
								   else if(ch[i]=='.')
									cout<<'.';
								    else if(ch[i]==',')
									cout<<',';
								    else if(ch[i]=='?')
									cout<<'?';
								    else if(ch[i]=='!')
									cout<<'!';
								   else { char r=(ht[ch[i]-'A']-'a')+'A';		
										cout<<r;}
								} 
								else cout<<ht[ch[i]-'a'];
									}
							cout<<endl;
									}
							return 0;}
								
				
				
