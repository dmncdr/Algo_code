#include<iostream>
#include<list>
#include<vector>
#include<string.h>
using namespace std;

bool hamilt(list<int> *adj){
	int path[101];
	int i=0;
	for(i=0;i<101;i++)
		path[i]=0;
	for(i=0;i<101;i++)
	{
		hamilt_bc(adj,path,i);
	}
}

bool hamilt_bc(list<int> *adj,int path[],int pos)
{
	if(pos==n)
		return true;
	else
		return false;
		
	iterator::list<int> *adj ii;
	for(ii=adj.begin();ii!=adj.end();ii++)
	{
		int v=*ii;
		if(path
		hamilt_bc(adj,path,v);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		list<int> *adj;
		adj=new list<int>[n];
		int i=0;
		int  ed[101][101];
		memset(ed,0,sizeof(ed));
		for(i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			if(ed[a][b]==0 && ed[b][a]==0)
			{ 
				adj[a].push_back(b);
				ed[a][b]=1;
		    }
		}
		if(m&1)
		{
			cout<<"No"<<endl; continue;
		}
		else
		{
			int flag=0;
			int ver[101];
			for(i=0;i<101;i++)
				ver[i]=0;
			
			if(hamilt(adj)==true)
			cout<<"Yes"<<endl;continue;
		}
	}
	return 0;
}
		   
		   
		   
			
