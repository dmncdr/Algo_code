#include<iostream>
#include<algorithm>
#define MAX 100005
#define mod 1000000007
using namespace std;
int p[MAX],r[MAX];
int find(int root){
	while(root!=p[root]){
		root=p[root];
	}
	return root;
}

void unioun(int ra,int rb){
	if(r[ra]>=r[rb]){
		r[ra]=r[ra]+r[rb];
		p[rb]=ra;
	}
	else {
		r[rb]=r[rb]+r[ra];
		p[ra]=rb;
	}
}
	

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
	    int i=0;
	    for(i=0;i<n;i++){
	    	p[i]=i;
	    	r[i]=1;
	    }
	    
	    for(i=0;i<k;i++){
	    	int x,y;
	    	cin>>x>>y;
	    	x--;y--;
	    	int rx=find(x);
	    	int ry=find(y);
	    	if(rx!=ry){
	    		unioun(rx,ry);
	    	}
	    }
	    int count=0;
	    long long int ans=1;
	    for(i=0;i<n;i++){
	    	if(p[i]==i){  count++; ans=((ans%mod)*(r[i]%mod))%mod; }
	    }
	    
	    cout<<count<<" "<<ans<<endl;
	}
	return 0;
}
	    
	    
	    
	    
	    
	    
	    		
	    		
	    	
		
