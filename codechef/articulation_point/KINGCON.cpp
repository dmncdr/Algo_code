#include<iostream>
#include<cstdio>
#include<vector>
#include<stack>
#include<list>

#define min(int ,int ) ((x)<(y)?(x):(y))  short int dfn[max_vertices]; short int low[max_vertices]; int num;


using namespace std;

typedef list<int> li;

class Graph{
		li *adj;
		int v_no;
		vi D;
		void initialized(int value);
		public:
			Graph(int v_no){
				this->v_no=v_no;
				adj=new li[v_no];}
				};
				
void Graph :: addedge(int start, int end){ adj[start].push_back(end); }
				
// now fuction for dfnlow->
void dfnlow(int u,v){
			li *ptr;
			int w;
			dfn[u]=low[u]=num++;
			for( ptr=G.begin();ptr<G.end();ptr->next){
				w=ptr->first();
				if(dfn[w]<0){ dfnlow(w,u); low[u]=min(low[u],low[v]);}
				else if(w!=v){ low[u]=min(low[u],dfn(w));}
				}
				}		


void init(void){
		int i;
		for(i=0;i<n;i++){
		visited[]=false;
		dfn[i]=low[i]=-1;}
		num=0;
		}
				
		
vector<int> dfn,low;
int main(){
		int t;
		scanf("%d",&t);
		while(t--){
				int n,m,k;
				scanf("%d%d%d",&n,&m,&k);
				int i=0,s,d;
				Graph G(n);
				for(i=0;i<m;i++){
				scanf("%d%d",&s,&d);
				G.addedge(s,d);}
				
				
				
				
				
			
			
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
				
					
				
				
				
								
				
