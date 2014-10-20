#include<iostream>
#include<cstdio>
#include<cmath>
bool isprime[50];
void sieve(){
	int sq=sqrt(50);
	isprime[2]=false;
	isprime[1]=true;
	isprime[0]=true;
	for(int i=3;i<sq;i+=2){
		if(isprime[i]){
			for(int j=i*i;j<50;j+=2*i){
				isprime[j]=true;
			}
		}
	}
	for(int i=4;i<=50;i+=2){
		isprime[i]=true;
	}
	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		long long L,R;
		cin>>L>>R;
		int i=0;
		int count=0;
		int ans=0;
		for(i=L;i=R;i++){
			int x=i;
			int sq=sqrt(x);
			
				
				
			
			
