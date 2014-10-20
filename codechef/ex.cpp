#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

//b is useless,use fast i/o

#define MAX 100022
char a[MAX];
int arr[MAX],b[9700],factor[7][MAX],l[MAX],*cst0[9700],*cst1[9700],*cst2[9700];
vector<int> vec[9700],vec1[9700],occur[MAX];

int maxi(int x,int y){return (x>y)?x:y;}
void sieve()
{
	int i,j,c,p=0,t,n;
	for(i=2;i<320;i++){
		if(!a[i]){
			factor[l[i]++][i]=p;
			b[p]=i;
			c=i+i;
			while(c<100000){
				a[c]=1;
				factor[l[c]++][c]=p;
				c+=i;
			}p++;
		}
	}
	for(i=321;i<100000;i+=2){
		if(a[i]==0){
			factor[l[i]++][i]=p;
			b[p++]=i;
		}
	}
	//for(i=2;i<100;i++){printf("%d--",i);for(j=0;j<l[i];j++)printf("%d,",factor[j][i]);printf("\n");}printf("\np=%d\n",z);
}

void build(int node,int i,int st,int end)
{
	if(st==end){
		cst0[i][node]=vec[i][st];
		cst1[i][node]=vec1[i][st];
		cst2[i][node]=vec1[i][st];
		return;
	}
	else{
		build(2*node,i,st,(st+end)/2);
		build(2*node+1,i,(st+end)/2+1,end);
		cst0[i][node]=maxi(cst0[i][2*node],cst0[i][2*node+1]);
		cst1[i][node]=cst1[i][2*node];
		cst2[i][node]=cst2[i][2*node+1];
		return;
	}
}	

int query(int node,int w,int i,int j){
	int x,y;
	if(i<cst1[w][node])
		i=cst1[w][node];
	if(j>cst2[w][node])
		j=cst2[w][node];
	if(i==cst1[w][node] && j==cst2[w][node])
		return cst0[w][node];
	if(j<cst1[w][node] || i>cst2[w][node])
		return -1;
	x=query(2*node,w,i,j);
	y=query(2*node+1,w,i,j);
	return maxi(x,y);
}

int find(int ans,int xx,int yy)
{
	int c=0;
	vector<int> :: iterator it1,it2;
	it1=lower_bound(occur[ans].begin(),occur[ans].end(),xx);
	it2=upper_bound(occur[ans].begin(),occur[ans].end(),yy);
	int xxx=(it2-occur[ans].begin());
	int yyy=(it1-occur[ans].begin());
	//printf("%d %d\n",xxx,yyy);
	c=xxx-yyy;
	return c;
}
	
	

int main()
{
	int i,j,n,m,y,z;
	sieve();
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		z=arr[i];
		occur[z].push_back(i);
		for(j=0;j<l[z];j++){
			y=factor[j][z];
			vec[y].push_back(z);
			vec1[y].push_back(i);
		}
	
	}
	//for(i=0;i<10;i++){printf("l=%d...%d--",vec[i].size(),b[i]);for(j=0;j<vec[i].size();j++)printf("%d,%d...",vec[i][j],vec1[i][j]);printf("\n");}
	
	for(i=0;i<=9602;i++){
		int z=vec[i].size();
		if(z>0){
			cst0[i]=new int[3*z];
			cst1[i]=new int[3*z];
			cst2[i]=new int[3*z];
			build(1,i,0,z-1);
		}
	}
	for(i=0;i<m;i++){
		int G,X,Y,w,tmp,ans=-1;
		scanf("%d %d %d",&G,&X,&Y);
		for(j=0;j<l[G];j++){
			w=factor[j][G];
			if(vec[w].size()==0)
				tmp=-1;
			else
				tmp=query(1,w,X-1,Y-1);
			if(tmp>ans)
				ans=tmp;
		}
		if(ans==-1){
			printf("-1 -1\n");
			continue;
		}
		printf("%d %d\n",ans,find(ans,X-1,Y-1));
	}		
	return 0;
}
	
		
	
	
	
