#include<iostream>
#include<stdio.h>
using namespace std;
int a[301][301];
int pa[301][301][11];
int main(){
		
				
				int n;
				cin>>n;
				int i=0,j=0;
				for(i=0;i<n;i++){ for(j=0;j<n;j++) cin>>a[i][j];}
			      
				pa[0][0][a[0][0]]++;
			 	for(i=1;i<n;i++){ 
						  pa[0][i][a[0][i]]++; 
						  for(int k=1;k<=10;k++) pa[0][i][k]+=pa[0][i-1][k];
					         
						}
				for(i=1;i<n;i++){
			                          pa[i][0][a[i][0]]++;
						  for(int k=1;k<=10;k++) pa[i][0][k]+=pa[i-1][0][k];
						}
					
				for(i=1;i<n;i++){
				    for(j=1;j<n;j++){
						pa[i][j][a[i][j]]++;
						for(int k=1;k<=10;k++)
						{
						  pa[i][j][k]+=pa[i-1][j][k];
						  pa[i][j][k]+=pa[i][j-1][k];
						  pa[i][j][k]-=pa[i-1][j-1][k];
						}
					}
					}
/*
		for(i=0;i<n;i++){
					for(j=0;j<n;j++){ for(int k=1;k<=10;k++) cout<<pa[i][j][k]<<" ";}
					cout<<endl;
					}
					cout<<endl;
*/				

				int q;
				cin>>q;
				for(i=0;i<q;i++){
						   int x1,y1,x2,y2;
						cin>>x1>>y1>>x2>>y2;
							x1--;y1--;x2--;y2--;						 
						  int ans[11];
						  for(int k=1;k<=10;k++) 
							ans[k]=0;
						
						for(int k=1;k<=10;k++)
						{
						  ans[k]+=pa[x2][y2][k];
						  if(x1>=1 && y1>=1)
						  ans[k]+=pa[x1-1][y1-1][k];
						  if(x1>=1)
						  ans[k]-=pa[x1-1][y2][k];
					          if(y1>=1)
						  ans[k]-=pa[x2][y1-1][k];
						}
						int final=0;
					  for(int k=1;k<=10;k++)
					 {
						if(ans[k]>0) final++;
					  }
					cout<<final<<endl;
				}
				return 0;
				}							
	
		
		

















						   
				
							
