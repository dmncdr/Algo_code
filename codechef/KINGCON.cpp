#include<iostream>
#include<stack>
#include<cstdio>
#define MAX 3001
#define initial 1
#define visited 2


int n,m,ki;
int a[MAX][MAX];
int dfs(int ,int );
std::stack<int> st;
int state[MAX];
int main(){


		int t;
		int arr[MAX];
		scanf("%d",&t);
		while(t--){
				

				scanf("%d%d%d",&n,&m,&ki);
				int i=0,s,d,dis=0;
				for(i=0;i<m;i++)
				{
				scanf("%d%d",&s,&d);
				a[s][d]=1;a[d][s]=1;}
				
				
				for(int k=0;k<n;k++){
				if(k==n-1){
				if(dfs(0,k)==n-1)
				dis++;}
				else
					 if(dfs(k+1,k)==n-1)
					 dis++;
					 }
					 
					 
					 printf("%d\n",(n-dis)*ki);}
					 return 0;} 				
									
									
																	
					int  dfs(int s,int k){
                                	int i,count=0;
                                        for(i=0;i<n;i++)
                                         state[i]=initial;
                                         state[k]=visited;
                               st.push(s);
                                while(!st.empty()){
                                        s=st.top();
                                        st.pop();
                                        if(state[s]==initial)
                                        {       count++;
                                                state[s]=visited;
                                        }
                                        for(i=n-1;i>=0;i--){
                                                if(a[s][i]==1 && state[i]==initial)
                                               st.push(i);
                                                                }       }
                                                      
                                        return count;
                                        }
                                        	

					
							
					
					
					
				
					
