#include<iostream>
#include<string.h>
using namespace std;
long long int  a[100002],b[100002],c[100002];
 int  main(){
		
				long long int  n;
				cin>>n;
				long long int  i=0;long long int  count1=0,count2=0;
				for(i=0;i<n;i++){ cin>>a[i]; if(a[i]<0) count1++;}
				 
				memset(b,0,sizeof(b));
				long long int  ans=999999999;
				if(a[0]>=0) b[0]=1;else b[0]=0;
				
				for(i=1;i<n;i++){ if(a[i]>=0) b[i]=b[i-1]+1; else b[i]=b[i-1];}
				
			
				int flag=0;
				for(i=0;i<n;i++){ long long int  tmp=(count1)-(i+1-b[i]);	
							
						      long long int  tmpa=b[i];
								if(b[i]==0) flag=1;else flag=0;
								if(ans>(tmp+tmpa))
									ans=tmp+tmpa;						
						}
				if(ans==999999999) ans=0;
				if(flag==1) ans=0;
				cout<<ans<<endl;
			return 0;}
							
