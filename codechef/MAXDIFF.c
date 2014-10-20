#include<stdio.h>
#define max 100002
void merge_sort(int [],int ,int );
void merge(int [],int [],int ,int,int,int);
void copy(int[],int[],int ,int);
int a[1000];
int main(){
		int t;
		scanf("%d",&t);
		while(t--){
				int n,k;
				scanf("%d%d",&n,&k);
				 int i=0,sum=0,sum1=0,sum2=0,ans=0,ans1=0,s1=0,s2=0;
				for(i=0;i<n;i++){
				scanf("%d",&a[i]);
				sum+=a[i];}
		//		printf("%d    ",sum);
				merge_sort(a,0,n-1);
				for(i=0;i<k;i++)
				sum1+=a[i];
		//		printf("sum1=%d   ",sum1);
				for(i=n-1;i>=n-k;i--)
				sum2+=a[i];
		//		printf("sum2=%d    ",sum2);
				s1=sum-sum1;
				if((s1-sum1)>0)
				ans=s1-sum1;
				else ans=sum1-s1;
		//		printf("ans=%d     ",ans);
				s2=sum-sum2;
				if((s2-sum2)>0)
				ans1=s2-sum2;
				else 
				ans1=sum2-s2;
		//		printf("ans1=%d   ",ans1);		
				if(ans>=ans1) 
				printf("%d\n",ans);
				else printf("%d\n",ans1);
				}
			return 0;}

        void merge_sort(int arr[],int low,int up)
                {
                        int mid;
                        int temp[max];
                        if(low<up)
                        {
                                mid=(low+up)/2;
                                merge_sort(arr,low,mid);
                                merge_sort(arr,mid+1,up);
                                merge(arr,temp,low,mid,mid+1,up);
                                copy(arr,temp,low,up);
                                }
                        }



        void merge(int arr[],int temp[],int low1,int up1 ,int low2,int up2)
                {
                        int i=low1;
                        int j=low2;
                        int k=low1;
                        while((i<=up1)&&(j<=up2))
                        {
                        if(arr[i]<=arr[j])
                                temp[k++]=arr[i++];
                                else
                                temp[k++]=arr[j++];
                                }
        while(i<=up1)
                temp[k++]=arr[i++];
        while(j<=up2)
                temp[k++]=arr[j++];
                }

        void copy(int arr[],int temp[],int low,int up)
                {
                        int i;
                        for(i=low;i<=up;i++)
                        arr[i]=temp[i];
                        }
                   

				
