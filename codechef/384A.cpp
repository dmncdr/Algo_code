#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int term;
	if(n%2==0) term=n/2;
	else term=n/2+1;
	int i=0,ans=0;
	//cout<<term;
	
	for(i=1;i<term;i++){
		ans+=2*(n-2*i);
	}
	ans+=n;
	cout<<ans<<endl;
	int j=0;
	for(i=0;i<n;i++){
		if(i%2==0){
		for(j=0;j<n;j++){
			if(j%2==0){ cout<<"C";}
			else cout<<".";
		}
		cout<<endl;
		}
		else {
			for(j=0;j<n;j++){
				if(j%2==0) cout<<".";
				else cout<<"C";
			}
			cout<<endl;
		}
	}
	return 0;
}
		
	
	
