#include<iostream>	
#include<cstdio>
#include<algorithm>
#include<vector>
#include<cmath>
#include<utility>
using namespace std;
vector<int> a,b;
vector<pair<int,int> > c;
int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++){int p;scanf("%d",&p); a.push_back(p);b.push_back(p);}
	int x=0,y=0;	
	sort(b.begin(),b.end());
	int m=0;
	for(i=0;i<n;i++){
		if(a[i]==b[i]) m++;
		else if(a[i]!=b[i]){
			int k=0,pos;
			for(k=m;k<n;k++){
				if(b[i]==a[k]){ pos=k; break;}
			}
			c.push_back(make_pair(i+1,pos+1));
			int rn=(pos-i)/2,rr=0;
			
			if((pos-i)%2==1) rn++;
			
			for(k=i;k<i+rn;k++){
				int tmp=a[k];
				a[k]=a[pos-rr];
				a[pos-rr]=tmp;
				//cout<<"swapping  "<<a[k]<<" "<<a[pos-rr]<<endl;
				rr++;
				
			}
			m++;
		}
	}
	cout<<c.size()<<endl;
	for(i=0;i<c.size();i++) cout<<c[i].first<<" "<<c[i].second<<endl;
	
	return 0;
}	
				
			
	
				
			
