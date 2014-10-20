#include<iostream>
#define mod 1000000007
unsigned long  long int power(unsigned long  long int a,unsigned long  long int b){ if(b==0) return 1; unsigned long  long int d=power(a,b/2)  ; return (((d*d)  )*(b&1?a:1)  )  ;}
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long  long int L,D,S,C;
		unsigned long long int po=0,i=0;
		cin>>L>>D>>S>>C;
		while(i<=D-1){
		if(L<=(S*power(1+C,i))){ 
			cout<<"ALIVE AND KICKING"<<endl; po=1;break;}
		else { if(i==0){ i=1;} i=2*i;}
	}
	 if(po==0){
	 	if(L<=(S*power(1+C,D-1))){
	 		cout<<"ALIVE AND KICKING"<<endl;}
	 	else{
	 		 cout<<"DEAD AND ROTTING"<<endl;
	 	}
	 }
}	 
return 0;
}
		
