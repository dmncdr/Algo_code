#include<iostream>
#include <cstdio>
#include<iomanip>
using namespace std;
double  arr[1001][1001];
void nCr(){
 
long int i, j;
for(i=0;i<1001;i++) {
arr[i][0]=1;
for(j=1;j<1001;j++) {
arr[i][j]=0;
}
}
for(i=1;i<1001;i++) {
for(j=1;j<1001;j++) {
arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
}
}
}


int main(){
		nCr();
		int t;
		cin>>t;
		while(t--){
		long int  s,n,m,k,i;
		long  double ans=0 ,c;
	
		cin>>s>>n>>m>>k;
		//cout<<arr[4][2];
			c=arr[s-1][n-1]*1.0;
		for(i=k;i<m;i++)
		ans+=(arr[m-1][i])*arr[s-m][n-1-i];
		ans/=c;
		cout<<fixed<<setprecision(6)<<ans<<endl;
		}
return 0;}
