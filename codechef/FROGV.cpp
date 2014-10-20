#include<cstdio>
#include<algorithm>
using namespace std;
struct nodi{
	int val;
	int pos;
}a[1000001];
int hash[1000001];
bool compare(const nodi &a,const nodi &b) {
	return a.val<b.val;}

int maxi(int a,int b){ return a>b?a:b;}
int mini(int a,int b){ return a>b?b:a;}

int main(){
	int n,k,p;
	scanf("%d%d%d",&n,&k,&p);
	int i=0;
	for(i=0;i<n;i++){ int x;scanf("%d",&x); nodi tmp; tmp.val=x;tmp.pos=i;a[i]=tmp;}
	
	sort(a,a+n,compare);
	//for(i=0;i<n;i++) printf("%d %d %d\n",a[i].val);
	
	int count=0;
	for(i=1;i<n;i++){
		if(i==1){
			if((abs(a[i].val-a[i-1].val)>k)){ 
				hash[a[i-1].pos]=count;hash[a[i].pos]=++count; 
			}
			else{ hash[a[i-1].pos]=count; hash[a[i].pos]=count;}
		}
	    else {
			if(abs(a[i].val-a[i-1].val)>k){count++;hash[a[i].pos]=count;}
			else hash[a[i].pos]=count;
		}
	}
	
	//for(i=0;i<n;i++){ printf("%d  \n",hash[i]);}
	
	for(i=0;i<p;i++){
		int x1,y1;scanf("%d%d",&x1,&y1);
		x1--;y1--;
		int x,y;
		x=mini(x1,y1);
		y=maxi(x1,y1);
	//	printf("%d %d\n",x,y);
		if(x==y) { printf("Yes\n");  continue;}
		if(hash[x]==hash[y]) printf("Yes\n");
		else printf("No\n");
	 }
	return 0;
}


















