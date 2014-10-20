#include<iostream>
#include<cstdio>
#include<list>
using namespace std;
int n,m;
list<int> *adj;
int wind[100001],visit[1000001],ans=0,val=0,ones=0,one=0,vv=0,may=0;
long long int ans1=0;
bool rec(int src){
	int trcount=0;
	visit[src]=1;
	if(wind[src]==1) one++;
	list<int>::iterator it;
	for(it=adj[src].begin();it!=adj[src].end();it++){
		int v=*it;
		if(visit[v]==0){
			if(rec(v))
				trcount++;
		}
	}
	if(wind[src]==1) { 
		val+=may;
		may=0;
		return true;
	}
	if(trcount>1){
		val+=may+1;
		//cout<<val<<" sdflskdfl"<<endl;
		may=0;
		return true;
	}
	else if(trcount==1) { may++;return true;}
	else  return false;
}

void go(){
	int i=0;
	for(i=1;i<=n;i++){
		val=0;
		if(visit[i]==0){
			 one=0;
			 may=0;
			 val=0;
			bool b=rec(i);
			if(one>1){ 
			ans1+=(long long int)((one)*(one-1)/2);
			ans+=val+one;
			}
		}
	}
	
} 
int main(){
		cin>>n>>m;
		adj=new list<int>[n+1];
	int i=0;
	for(i=1;i<=n;i++) cin>>wind[i];
	for(i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	go();
	cout<<ans1<<" ";
	cout<<ans<<endl;
	return 0;
}
