#include<iostream>
#include<cstdio>
using namespace std;
int con[500];
int mini(int x,int y){ return (x>y)?y:x;}

void build(int node,int con[],int a[],int st,int end){
	if(st==end){  con[node]=a[st]; return ;}
	else {
		build(2*node,con,a,st,(st+end)/2);
		build(2*node+1,con,a,(st+end)/2+1,end);
		con[node]=mini(con[2*node],con[2*node+1]);
		return ;
	}
}

int query(int node,int con[],int i,int j,int st,int end){
	if(i>end || j<st) return 999999999;
	else if(i<=st && j>=end) return con[node];
	else {
		int x=query(2*node,con,i,j,st,(st+end)/2);
		int y=query(2*node+1,con,i,j,(st+end)/2+1,end);
		int ans;
		 ans=mini(x,y);
		return ans;
	}
}
	

int main(){
	int n,q,a[101];
	cin>>n;
	int i;
	for(i=0;i<n;i++) cin>>a[i];
	build(1,con,a,0,n-1);
	cin>>q;
	
	while(q--){
	int k,j=0;
	cin>>k;
	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
		if(k==query(1,con,i,j,0,n-1)) count++;
		}
	}
	cout<<count<<endl;
	
	}
	return 0;
} 
