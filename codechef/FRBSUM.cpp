#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int A[100002];
int con[400002];
vector<int> qu[400004],su[400004];

int main(){
	int t;
	cin>>t;
	while(t--){
		int  n;
		for(i=0;i<n;i++) cin>>A[i];
		build(1,0,n-1);
		
		
		
