#include<iostream>
#include<cstring>
#define MAX 1000006
bool isprime[MAX];
using namespace std;
void pre()
{
  memset(isprime,true,sizeof(isprime));
  isprime[0]=isprime[1]=false;
  for(int i=3;i*i<=MAX;i+=2) 
  if(isprime[i])
    for(int j=i*i;j<=MAX;j+=2*i) isprime[j]=false;	
}

int sod(int a){	
			int c=0;
			while(a>0){ c+=a%10; a/=10;}
			return c;}


int main(){
		
		int t;
		cin>>t;
		pre();
		while(t--){
				int l,u;
				cin>>l>>u;
				int count=0;
				int i=0;
				for(i=l;i<=u;i++){
					int s=sod(i);
					if(s==2){ count++; continue;}
					else if(s%2==0) continue;
					else if(isprime[s]) count++;}
				
			cout<<count<<endl;}
			return 0;}
