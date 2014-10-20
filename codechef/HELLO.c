#include<stdio.h>
	int main(){
			int t;
			scanf("%d",&t);
			while(t--){
					int u,n;
					float d;
					scanf("%f%d%d",&d,&u,&n);
					float value=d*u;
					
					int i=0;
					int ans=0;
					
					for(i=1;i<=n;i++){
								int m,c;
							        float r;
							        scanf("%d%f%d",&m,&r,&c);
							        
							         float  value1=(c+r*u*m)/m;
							       
							         
							     
							         if(value1<value){
							         			
							         			value=value1;
							         			ans=i;
							         			
							       }}
							          printf("%d\n",ans);}
							          
							       
							       return 0;}
							       
							         			
							         			
							         			
							        
							        
								
								
		
		
