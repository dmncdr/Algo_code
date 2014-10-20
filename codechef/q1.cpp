#include<iostream>
using namespace std;
int main(){
		int t;
		cin>>t;
		while(t--){
				int k;
				cin>>k;
				int a=103993;
				int b=33102;
					cout<<a/b;
					a=a%b;
					a*=10;
					if(k>0)
					cout<<".";
				for(int i=0;i<k;i++){
							cout<<a/b;
							a=a%b;
							a*=10;
							}
							cout<<endl;
							}
							return 0;}
							
						
							
