#include<iostream>
#include<cstdio>
#include<math.h>
#include<cstdlib>
using namespace std;

				
				
#define i64 unsigned long long

i64 mulmod(i64 a, i64 b, i64 c)
{
i64 x = 0, y = a%c;
while(b>0)
{
if(b&1) x = (x+y)%c;
y = (y<<1)%c;
b = b>>1;
}
return x;
}

i64 modulo(i64 a, i64 b, i64 c)
{
i64 x = 1, y = a%c;
while(b>0)
{
if(b&1) x = mulmod(x,y,c);
y = mulmod(y,y,c);
b = b>>1;
}
return x;
}

bool miller(i64 p, long long int  iter)
{
if(p<2) return false;
if(p==2) return true;
if(!(p&1)) return false;
i64 s = p-1, a, temp, mod;
while(!(s&1)) s = s>>1;
for(long long int i=0; i<iter; i++)
{
a = rand()%(p-1)+1;
temp = s;
mod = modulo(a, temp, p);
while(temp!=p-1 && mod!=1 && mod!=p-1)
{
mod = mulmod(mod, mod, p);
temp = temp<<1;
}
if(mod!=p-1 && !(temp&1)) return false;
}
return true;			
 }


	int main(){
			int t;
			scanf("%d",&t);
				while(t--){
                                              i64 n,i;					
						
						scanf("%llu",&n);
						if(n==2 ) {cout<<"2"<<endl; continue;}
						
						if(n==3 ) {cout<<"3"<<endl; continue;}
						if(n==4 ) {cout<<"3"<<endl; continue;}
						if(n==5 ) {cout<<"5"<<endl; continue;}
						if(n==9 ) {cout<<"7"<<endl; continue;}
						if(n==10 ) {cout<<"7"<<endl; continue;}
						if(n==11) {cout<<"11"<<endl; continue;}
						
							i64 sq=sqrt(n);
						
							if(n%2==0){
							n=n-1;
							for(i=n;i>sq;i=i-2)
							{	
							if(miller(i,2))
							break;
								}}
							else {
								for(i=n;i>sq;i=i-2)
								{
								if(miller(i,2))
								break;
								}
							}
							printf("%llu\n",i);
								
								}
								return 0;}	
							
							

