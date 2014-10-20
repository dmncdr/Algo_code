#include<stdio.h>
//long long int con[900092];
 unsigned long long int arr[100009];
 unsigned long long int con[100009];
/*
void build(int con[],int arr[],int node,int st,int end,int mod){
                                                if(st==end)
                                                con[node]=arr[st]-mod*(arr[st]/mod);
                                                else if(st<end){
                                                	int mid=st+end>>1;
                                                        build(con,arr,2*node,st,mid,mod);
                                                        build(con,arr,2*node+1,mid+1,end,mod);
                                                        con[node]=((con[2*node]-mod*(con[2*node]/mod))*(con[2*node+1]-mod*(con[2*node+1]/mod)))-mod*(((con[2*node]-mod*(con[2*node]/mod))*(con[2*node+1]-mod*(con[2*node+1]/mod)))/mod);
                                                        }
                                                        }
int query(int con[],int node,int a,int b,int st,int end,int mod){
                                                           if(a>end || b<st) return 1;
                                                           else if(a<=st && b>=end) return con[node];
                                                           else {
                                                           		int mid=(st+end)>>1;
                                                           		int k1=query(con,2*node,a,b,st,mid,mod);
                                                                 int k2=query(con,2*node+1,a,b,mid+1,end,mod);
                                                                 return ((k1-mod*(k1/mod))*(k2-mod*(k2/mod)))-mod*(((con[2*node]-mod*(con[2*node]/mod))*(con[2*node+1]-mod*(con[2*node+1]/mod)))/mod);
                                                           }
                                                           }
*/
        int main(){
                    long long int n;
                    scanf("%llu",&n);
                    long long int i=0;
                    for(i=0;i<100009;i++) con[i]=1;
                    for(i=0;i<n;i++)
                        scanf("%llu",&arr[i]);
                    //    for(i=0;i<n;i++) printf("%llu\n",arr[i]);
                       
                        
                          for(i=0;i<=n-10;i++){
                          	  	int j;
                          	  	for(j=i;j<i+10;j++) 
                          	  	con[i]*=arr[j];
                          	  	if(j==n) break;
                          	  	}
                          	  	
                          	//for(i=0;i<=n-10;i++) printf("%llu\n",con[i]);
                          	  	
                          	  	
                          	  				
                          	
                          			

                       unsigned  long long int t;
                        scanf("%llu",&t);
                        while(t--){
                                           
                                         unsigned    long long int  a, b;
                                            unsigned long long int mod;
                                            scanf("%llu%llu%llu",&a,&b,&mod);
                                            a=a-1;b=b-1;
                                          //  build(con,arr,1,0,n-1,mod);
                                            //int ans=query(con,1,a-1,b-1,0,n-1,mod);
                                       unsigned long long int ans=1;
                                       		int j=a;
                                       		int m=(b-a+1)%10;
                         			if(b-a+1>=10){
                         			for(i=a;i+9<=b;i+=10){
                         			 j=i+10;
                         			ans=((ans-mod*(ans/mod))*(con[i]-mod*(con[i]/mod)))-mod*(((ans-mod*(ans/mod))*(con[i]-mod*(con[i]/mod)))/mod);}
                         			}
                         			for(i=j;i<j+m;i++)
                         			ans=((ans-mod*(ans/mod))*(arr[i]-mod*(arr[i]/mod)))-mod*(((ans-mod*(ans/mod))*(arr[i]-mod*(arr[i]/mod)))/mod);	                        			
                      				
                
                                        //    ans=((ans-mod*(ans/mod))*(arr[i]-mod*(ans/mod)))-mod*(((ans-mod*(ans/mod))*(arr[i]-mod*(ans/mod)))/mod);
                                            printf("%llu\n",ans);
                                            }
                            return 0;}









