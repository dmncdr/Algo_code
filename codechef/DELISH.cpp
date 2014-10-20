#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<cmath>
using namespace std;
 
long double        maxim(long double   a,long double       b){ return (a>b)?a:b;}
 
class par{
	public:
		int      st;
		int         end;
		long double        sum;};
		
		 par  max_sum(int         j,int        n,long double        arr[]){
						long double        max_s=0;
						long double        temp_sum=0;
						int         a=j,b=j,c=j;
						for(int        i=j;i<n;i++)
						{    temp_sum=temp_sum+arr[i];
						     if(temp_sum<0){c=i+1;temp_sum=0;}
						     if(temp_sum >= max_s){ a=c; b=i; max_s=temp_sum;}
						     }
							par ret;			    
						     ret.st=a; ret.end=b; ret.sum=max_s;
						     return ret;}
						     
					
					
			
			 par  min_sum(  int       j,int       n,long double        arr[]){
			long double        min_s=0;
			long double        temp_sum=0;
			int        a=j,b=j,c=j;
						
						for(int       i=j;i<n;i++)
						{    
						
						     temp_sum=temp_sum+arr[i];
						     if(temp_sum>0){ c=i+1; temp_sum=0;}
						     if(temp_sum <= min_s){ a=c; b=i; min_s=temp_sum;}
						     }
						      
						     
						     par ret;
						     ret.st=a; ret.end=b; ret.sum=min_s;
						     return ret;}
						     
			long double  find_sum(int   n,long double  g_sum,long double  arr[]){
							long double  suml=0,sumr=g_sum,temp_ans=0,per_ans=0;
								for(int  i=0;i<n;i++){
							sumr-=arr[i];
							temp_ans=maxim(sumr-arr[i],suml-arr[i]);
							if(per_ans<temp_ans) per_ans=temp_ans;
							
							suml+=arr[i];}
							return per_ans;}
								 									
												
												  
												  
												  
											     
					
	 int   main(){
		 int            t;
		  cin>>t;
		while(t--){
				int         n;
				cin>>n;
				int         i=0;
				
				
					
					long double        arr[10001],tot=0;
					
					 int           check_p=1,check_n=1;
					for(i=0;i<n;i++){
						cin>>arr[i];}
					
					for(i=0;i<n;i++)
					{  if(check_n && arr[i]>0){ check_n=0; break;}}
					for(i=0;i<n;i++)
					   {if(check_p && arr[i]<0){ check_p=0; break;}}
					
					
						
					par ret=max_sum(0,n,arr);
						
					int        a=ret.st;
					int         b=ret.end;
					long double        sum=ret.sum;
					
					
					par ret_l=min_sum(0,a,arr);
					int         a_l=ret_l.st;
					int         b_l=ret_l.end;
					long double        sum_l=ret_l.sum;
					par ret_r;
					if(b==0) 
					 ret_r=min_sum(b,n,arr);
					else  ret_r=min_sum(b+1,n,arr);
					int        a_r=ret_r.st;
					int         b_r=ret_r.end;
					long double        sum_r=ret_r.sum;
					
					
					// now min first---
					
					par ret00=min_sum(0,n,arr);
					int         a00=ret00.st;
					int         b00=ret00.end;
					long double        sum00=ret00.sum;
					
					par ret00_l=max_sum(0,a00,arr);
					int         a00_l=ret00_l.st;
					int         b00_l=ret00_l.end;
					long double        sum00_l=ret00_l.sum;
					par ret00_r;
					if(b==0) ret00_r=max_sum(b00,n,arr);
					else 
					ret00_r=max_sum(b00+1,n,arr);
					int         a00_r=ret00_r.st;
					int         b00_r=ret00_r.end;
					long double        sum00_r=ret00_r.sum;
					long double       ans1=0,ans2=0,ans3=0,ans=0,ans4=0,ans5=0;
					
					 if(a==0 && b==n-1){ ans1=find_sum(n,sum,arr);}
					 if(a00==0 && b00==n-1){  for(i=0;i<n;i++) arr[i]=-arr[i]; sum00=-sum00;ans2=find_sum(n,sum00,arr);}	  
 
					//printf("%lf %lf %lf\n",a,b,sum);
					if(check_p==0 && check_n==0){			
					long double        x=fabs(sum-sum_l);
					long double        y=fabs(sum-sum_r);
					long double        x1=fabs(sum00-sum00_l);
					long double        y1=fabs(sum00-sum00_r);
					
					  if((sum_l>0 ||sum_l<0 || sum_r>0 ||sum_r<0) && sum!=0)
					  ans3=maxim(x,y);
					  if((sum00_l>0 || sum00_l<0||sum00_r>0||sum00_r<0) && sum00!=0)
					  ans4=maxim(x1,y1);
					  
				//	  cout<<ans3<<endl;
					  ans5=maxim(ans3,ans4);
					  //					 cout<<x<<endl;
					 //cout<<y<<endl;
					 //cout<<x1<<endl;
					 //cout<<y1<<endl;
					  
					   }
					  ans=maxim(ans5,maxim(ans1,ans2));
					  
					 
					  //cout<<a<<" "<<b<<" "<<sum<<endl;
					 //cout<<a_l<<" "<<b_l<<" "<<sum_l<<endl;
					  //cout<<a_r<<" "<<b_r<<" "<<sum_r<<endl;
					  //cout<<" aur"<<endl;
					  //cout<<a00<<" "<<b00<<" "<<sum00<<endl;
					 //cout<<a00_l<<" "<<b00_l<<" "<<sum00_l<<endl;
					  //cout<<a00_r<<" "<<b00_r<<" "<<sum00_r<<endl;
					 //cout<<ans5<<endl; 
					 //cout<<ans3<<endl;
					 //cout<<ans4<<endl;

					 //cout<<'sum_l||sum_r'<<endl;
					//cout<<check<<endl;
					printf("%.0Lf\n",ans);
					
																
				}
					return 0;
				}	
					
					
