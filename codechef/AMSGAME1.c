#include<stdio.h>
int gcd(int ,int );
int main (){
		int t;
		scanf("%d",&t);
		while(t--){
		
		int n,i;
		int arr[1003];
		//printf("enter the size of array---");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		printf("%d\n",calgcd(arr,0,n-1));
		}
		return 0;}
int gcd(int a,int b){	
			if(b==0) return a;
			else return gcd(b,a%b);}

int calgcd(int arr1[],int start,int end){
                                                int left=1,right=1;
                                         if((end-start)<=1) return gcd(arr1[start],arr1[end]);
                                         else {
                                                 left=calgcd(arr1,start,(start+end)/2);
                                                right=calgcd(arr1,(start+end)/2+1,end);
                                                return gcd(left,right);}}

		
