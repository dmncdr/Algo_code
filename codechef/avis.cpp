#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
typedef pair<int,int> pr;
typedef vector<pr> arr;
map<long int,long int> m;
bool myfun(pr i,pr j)
{
return ((i.second>j.second));
}
 int  main()
{
arr a(100005);
long long int  t,n;
cin>>t;
long long int  sum=0,num=0;
while(t--)
{
sum=0;
num=0;
cin>>n;
for(long long int  i=0;i<n;i++){
cin>>a[i].first>>a[i].second;
m[a[i].first]=0;}
sort(a.begin(),a.end(),myfun);
//long long long long int  sum=0,num=0;
for(long long int  i=n-1;i>=0;i--)
{
m[a[i].first]++;
if(m[a[i].first]==1)
num++;
//cout<<num<<" ";
sum+=num*a[i].second;
}
cout<<sum<<endl;
}
return 0;
}
