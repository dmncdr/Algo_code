#include<iostream>
#define maxi 1000
using namespace std;
int s,m;
bool arr[maxi][maxi];
 				
 				
 				int count =0;
	int sur(int a,int b){
				
				
				 if(a-1>=0 && b-1>=0 && a+1<s && b+1<s){
				 	arr[a][b]=true;
				 	if(arr[a+1][b]==false)
				         int a =sur(a+1,b);
				         if(arr[a+1][b+1]==false)
				         int b=sur(a+1,b+1);
				         if(arr[a+1][b-1])
				         int c=sur(a+1,b-1);
				         if(arr[a][b+1]==false)
				         int d=sur(a,b+1);
				         if(arr[a-1][b-1]==false)
				         int e=sur(a-1,b-1);
				         if(arr[a-1][b]==false)
				         int f=sur(a-1,b);
				         if(arr[a][b-1]==false)
				         int g=sur(a,b-1);
				         if(arr[a-1][b+1]==false)
				         int h=sur(a-1,b+1);
				  	return count=a+b+c+c+d+e+f+g+h+1;}
				  	else return 0;}
				 
int main(){
			
				int d;
				cin>>s>>m>>d; 
				 char ch;
				 int p=m;
				 int x,y;
				 while(p--){	
					 cin>>ch>>x>>y;
						if(ch=='S') cout<<sur(x,y)<<endl;				
						}
						}
	
