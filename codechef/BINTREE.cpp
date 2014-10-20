#include<iostream>
#include<cstdio>
using namespace std;
int maxi(int a,int b){ return a>b?a:b;}
int mini(int a,int b){ return a>b?b:a;}
int main(){
	int n;
	scanf("%d\n",&n);
	while(n--){
		int x,y;scanf("%d%d",&x,&y);
		
		int ans=0;
		while(1){
			if(x>y){
				while(x>y){
					x/=2;
					ans++;
				}
			}
			if(x<y){
				y/=2;
				ans++;
			}
			if(x==y) break;
		}
				
		printf("%d\n",ans);
	}
	return 0;
}
			
		
