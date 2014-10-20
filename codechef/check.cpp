#include<iostream>
#include<cstdio>
#include<cmath>
int fact[100001][129];
using namespace std;
int main(){
	int t;
	cin>>t;
	int i=0,j=0,ans=0;
	for(i=2;i<=t;i
		int cnt=0;
		for(j=1;j<=sq;j++){
			float a=i/j;
			if(a==sq) cnt++;
			else {
				if((i%j)==0) cnt+=2;
			}
		}
		//cout<<cnt<<endl;
		if(ans<cnt) ans=cnt;
	}
	cout<<ans<<endl;
	float d=sqrt(100000);
	float ss=100000*d;
	printf("%f\n",ss);	
	return 0;
}
			
		++){
		int sq=sqrt(i);
