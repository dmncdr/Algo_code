#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX 1000004
int main(){
		int t;
		cin>>t;
		while(t--){
				int n,q;
				cin>>n>>q;
				int arr[MAX],con[MAX];
				memset(arr,0,sizeof(arr));
				memset(con,0,sizeof(con));
						
				int i=0;
				for(i=0;i<n;i++)
				cin>>arr[i];
				sort(arr,arr+n,greater<int>());
			
					long long int sum=0;				
					for(i=0;i<q;i++){
							long long int a,b;							
						cin>>a>>b;
						for(int j=a;j<=b;j++) con[j]++;		
							}
				sort(con,con+MAX,greater<int>());
				//for(int j=0;j<n;j++) cout<<con[j];	cout<<endl;
				for(i=0;i<n;i++)
				sum+=con[i]*arr[i];
					cout<<sum<<endl;
				}

		return 0;}
				
