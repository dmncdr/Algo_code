
#include<stdio.h>
 int  store[25][100001];
 int  fac[25][101];
 int num[101];
 long long int mod;
long long int  power(int  a,int   b){ if(b==0) return 1; 
if(b==1) return a; long long  int  d=power(a,b/2); if(b&1==0){ return (d*d)%mod; } else return (((d*d)%mod)*a)%mod;}

 int   a[100001],j=0;

int     p[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};


 int  main(){
 
 		
		int     n;
		int     i=0;
		
		for(i=1;i<101;i++)
		num[i]=i;
		 
			for(i=0;i<25;i++)
			{
				for(j=1;j<101;j++)
				{	    
			         	    	               int   count=0;
					      		     	while(!(num[j]%p[i]))
							   { 	              num[j]/= p[i];
							              count++;
						 	   }	
								fac[i][j]=count;
							
						
											//printf("%lld  ",store[i][j]);
						
						}
						//printf("\n");	
			}
			
			
		        scanf("%d",&n);
			
			for(i=0;i<25;i++)
			store[i][0]=0;

			for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			for(j=0;j<25;j++)
				store[j][i]=store[j][i-1]+fac[j][a[i]];
			}
		
		
		
		
		
	
			
				
			
			
			
					 int  t;
					scanf("%d",&t);
				
						       int    a,b;
						    
						       long long int     ans=1;
				 while(t--){
				 ans=1;
						      scanf("%d%d%lld",&a,&b,&mod);
						      for(i=0;i<25;i++)
							  ans=(ans*power(p[i],(store[i][a-1]-store[i][b])))%mod;
						      printf("%lld\n",ans);
					   }
							return 0;}
							
						
										
								
								
								
								
								
						
								
					
												
							
								
								
			
								
								
								
								
								
								
								
								
				
				 
		
		
		
		
		
		
		
