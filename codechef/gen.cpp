#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(){
	int t=30;
	while(t--){
	int n,k,p;
	n=rand()%10;
	k=rand()%100;
	p=rand()%50;
	cout<<n<<" "<<k<<" "<<p<<endl;
	for(int i=0;i<n;i++){
		int x=rand()%100;
		cout<<x<<" ";
	}
	cout<<endl;
	}
	return 0;
}
