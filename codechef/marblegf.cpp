#include<iostream>
using namespace std;
struct cont{
		long long int val;
		long long int change;};

long long int  a[1000002];
struct cont ds[4000008];
long long int cn[1000002];

void build(struct cont ds[],long long int a[],int node,int st,int end){
					if(st==end){ ds[node].val=a[st]; ds[node].change=0; return ;}
					else {		
						build(ds,a,2*node,st,(st+end)/2);
						build(ds,a,2*node+1,(st+end)/2+1,end);
						ds[node].val=ds[2*node].val+ds[2*node+1].val;
						return ;}
					}

void update(struct cont ds[],int node,int i,int j,int k,int st,int end){	
						if(j<st || i>end) return ;
						else if(i<=st && j>=end){ ds[node].val+=k; return;}
						else{
							update(ds,2*node,i,j,k,st,(st+end)/2);
							update(ds,2*node+1,i,j,k,(st+end)/2+1,end);
							ds[node].val=ds[2*node].val+ds[2*node+1].val;
							return ;						    
							}
						}

						
											
long long int query(struct cont ds[],int node,int i,int j,int st,int end){
						if(j<st	 || i>end) return 0;
						else if(i<=st && j>=end) return ds[node].val;
						else {
							long long int p=query(ds,2*node,i,j,st,(st+end)/2);
							long long int q=query(ds,2*node+1,i,j,(st+end)/2+1,end);
							return p+q;
							}
					}

						

 int  main(){
		long long int  n,q;
		cin>>n>>q;
		long long int  i=0;
		for(i=0;i<n;i++) cin>>a[i];
		build(ds,a,1,0,n-1);
		
		for(i=0;i<q;i++){
					long long int  ans=0;
					char ch;
					int j,k;
					cin>>ch>>j>>k;
					if(ch=='S'){ ans=query(ds,1,j,k,0,n-1);
						     //for(long long int  h=j;h<=k;h++) ans+=cn[h];
							cout<<ans<<endl;
						    }
					else if(ch=='G'){
							  // cn[j]+=k;
							  update(ds,1,j,j,k,0,n-1);
							}
					else if(ch=='T'){ 
								update(ds,1,j,j,-k,0,n-1);
							   }
						}
				return 0;
			}
					
