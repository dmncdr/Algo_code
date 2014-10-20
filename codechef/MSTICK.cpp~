#include<iostream>
#include<cstdio>
#include<algorithm>
#define max 100001
#define limit 400004
void build1(int ,int ,int ,int[],   int []);
void build2(int ,int ,int ,int[],   int []);
int query1(int,int,int,int [], int [],int ,int);
int query2(int,int,int,int [], int [],int ,int);

int A[limit],B[limit];
int arr[max];

using namespace std;
int main(){
	
					int n;
					cin>>n;
					int i=0;
	
					
					for(i=0;i<n;i++)
					cin>>arr[i];
					
					build1(1,0,n-1,A,arr);
		
					build2(1,0,n-1,B,arr);
					//sort(arr,arr+n);
								int q;
						cin>>q;
						while(q--){	
								int st,end;
								cin>>st>>end;
								int min=query1(1,0,n-1,A,arr,st,end);
								
//cout<<arr[min]<<endl;								
								
								int max1,max2;
								if(st==0)
								max1=0;
								else 
								 max1=arr[query2(1,0,n-1,B,arr,0,st-1)];
								
//						cout<<max1<<endl;		
								
								if(end==n-1)
								max2=0;
								else
								 max2=arr[query2(1,0,n-1,B,arr,end+1,n-1)];
							
						
//						cout<<max2<<endl;		
								
								int max3=arr[query2(1,0,n-1,B,arr,st,end)];
								
//							cout<<max3<<endl;
							
								float check=(max3-arr[min])*1.00;
								float ans=0.0;
									
								check/=2;
								
								if(max1>=check && max1>=max2)
								ans=arr[min]+max1;
								else if(max2>=check && max2>=max1)
								ans=arr[min]+max2;
								else if(check>=max1 && check>=max2)
								ans=arr[min]+check;
								
								
								printf	("%.1f\n",ans);
								
								
								
							
								
							}
							
							return 0;}
							

	   void build1(int node, int b, int e, int A[], int arr[])
	{
      if (b == e)
          A[node] = b;
     else
       {
 
          build1(2 * node, b, (b + e) / 2, A, arr);
          build1(2 * node + 1, (b + e) / 2 + 1, e, A, arr);
  
           if (arr[A[2*node]]<=arr[A[2* node+1]])
              A[node] = A[2*node];
          else 
              A[node] = A[2*node+1]; 
      }
  }

   void build2(int node, int b, int e, int B[], int arr[])
	{
      if (b == e)
          B[node] = b;
     else
       {
 
          build2(2 * node, b, (b + e) / 2, B, arr);
          build2(2 * node + 1, (b + e) / 2 + 1, e, B, arr);
  
           if (arr[B[2*node]]>=arr[B[2* node+1]])
              B[node] = B[2*node];
          else 
              B[node] = B[2*node+1]; 
      }
  }




 int query1(int node, int b, int e, int A[], int arr[], int i, int j)
  {
      int p1, p2;
 
      if (i > e || j < b)
          return -1;

  
      if (b >= i && e <= j)
          return A[node];


      p1 = query1(2 * node, b, (b + e) / 2, A, arr, i, j);
      p2 = query1(2 * node + 1, (b + e) / 2 + 1, e, A, arr, i, j);

 
      if (p1 ==-1)
          return  p2;
      if (p2 ==-1)
          return p1;
      if (arr[p1]<=arr[p2])
          return p1;
      return p2;}
      
      
 int query2(int node, int b, int e, int B[], int arr[], int i, int j)
  {
      int p1, p2;
 
      if (i > e || j < b)
          return -1;

  
      if (b >= i && e <= j)
          return B[node];


      p1 = query2(2 * node, b, (b + e) / 2, B, arr, i, j);
      p2 = query2(2 * node + 1, (b + e) / 2 + 1, e, B, arr, i, j);

 
      if (p1 ==-1)
          return  p2;
      if (p2 ==-1)
          return p1;
      if (arr[p1]<=arr[p2])
          return p2;
      return p1;}
      
      
      
      
      
      
      
      
      
 								
