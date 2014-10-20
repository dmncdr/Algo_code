#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		vector<pair<int,pair<int,int> > > vec;
		int i=0;
		for(i=0;i<n;i++){
			int a,b,c;
			scanf("%d%d%d",&a,&b,&c);
			vec.push_back(make_pair(c,make_pair(b,a)));
		}
		if(n==0){
			printf("0\n"); continue;
		}
		sort(vec.begin(),vec.end());
		vector<pair<int,pair<int,int> > >::iterator ii,iii,it;
	//	for(it=vec.begin();it!=vec.end();it++)
		//	printf("%d  %d   %d\n",it->first,(it->second).first,(it->second).second);	
		ii=vec.begin();
		int prev=ii->first;
		iii=ii+1;
		int count=1;
		int flag=0;
		for( ;iii!=vec.end();iii++)
		{
			int r=iii->first;
			int y=(ii->second).first;
			int z=(iii->second).second;
			if(prev==r){
				if(z>=y){
					count++;
					ii=iii;
					
				}
			}
			else{
				count++;
				ii=iii;
				prev=r;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}




				
				
				
				
		
