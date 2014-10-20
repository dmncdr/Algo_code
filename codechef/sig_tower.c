#include<iostream>
#include<utility>
#include<stdio.h>
#define MAX 100001
#define LMAX 30003
using namespace std;
int conx[LMAX],cony[MAX];
int px[MAX];
int py[MAX]; 
float ans;

void build(int node,int  conx[],int  cony[],int px[],int py[],int st,int end){
				if(st==end)
				{
					conx[node]=px[st]; cony[node]=py[st];
					return ;}
				else {		
						build(2*node,conx,cony,px,py,st,(st+end)/2);
						build(2*node+1,conx,cony,px,py,(st+end)/2+1,end);
					   	conx[node]=conx[2*node]+conx[2*node+1];
						cony[node]=cony[2*node]+cony[2*node+1];

				    }
					}	


void query1(int node,int conx[],int st,int end,int i,int j){
							    if(j<st || i>end)
								return -1;
							   else if( st<=i && end>=j) return conx[node];
							   else{
									int a=query1(2*node,conx,st,(st+end)/2,i,j);
									int b=query1(2*node+1,conx,(st+end)/2+1,end,i,j);
									return a+b;
								 }
							}


void query2(int node,int cony[],int st,int end,int i,int j){
						if(j<st || i>end)
								return -1;
							   else if( st<=i && end>=j) return cony[node];
							   else{
									int a=query1(2*node,cony,st,(st+end)/2,i,j);
									int b=query1(2*node+1,cony,(st+end)/2+1,end,i,j);
									return a+b;
								 }
							}
						



							
		
						
					
						
int main(){
		int n,q;
		cin>>n>>q;
		int i=0;
		for(i=0;i<n;i++)
		cin>>px[i];
		for(i=0;i<n;i++)
		cin>>py[i];
		build(1,conx,cony,px,py,0,n-1);
		for(i=0;i<q;i++){
					int l,r;
					cin>>l>>r;
					ans=query1(1,conx,px,0,n-1,l,r);
					cout<<ans<<endl;
					ans+=query2(1,cony,py,0,n-1,l,r);
					ans=(ans*1.00)/(r-l+1);
					
					
					cout<<ans<<endl;
					}

		return 0;}

