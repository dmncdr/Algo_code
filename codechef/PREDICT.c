#include<stdio.h>
double max(double a,double b) { return (a>=b)?a:b;}
int main(){
		int t;
		scanf("%d",&t);
				while(t--){
						double a;
						scanf("%lf",&a);
						
							double ans1=10000*(1+a*(2*(1-a)-1));
							double b=1-a;
								double ans2=10000*(1+b*(2*(1-b)-1));
							
						printf("%.6lf\n",max(ans1,ans2));}
						return 0;
								}								
