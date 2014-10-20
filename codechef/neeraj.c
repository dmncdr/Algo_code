#include<stdio.h>
int n,m;
int visited[20002];
int p;//answer p<=m
int maxp;
int sold;//<=n
int a[22][20001];
void rec(int k)//considering k no. person
{
if(sold==n || p+(m-k)<maxp)
return;
int i,cnt=a[k][0];
if(k>m || sold>n-cnt)
return;
int j,f=1;//we can fulfil
for(i=1;i<=cnt;i++)
if(visited[a[k][i]])
{
f=0;
break;
}
if(f)
{
if(++p>maxp)
maxp=p;
if(k==m || sold==n-cnt || p+(m-k)<maxp)
{
p--;
return;
}
for(i=1;i<=cnt;i++)
visited[a[k][i]]=1;
sold+=cnt;

rec(k+1);

sold-=cnt;
for(i=1;i<=cnt;i++)
visited[a[k][i]]=0;
p--;
}
rec(k+1);
}
int main()
{
int cnt,i,j;
p=maxp=0;
scanf("%d %d",&n,&m);
for(i=1;i<=m;i++)
{
scanf("%d",&cnt);
a[i][0]=cnt;
for(j=1;j<=cnt;j++)
scanf("%d",a[i]+j);
}
rec(1);//recursively check if you can fulfil person no. 1's order ,then 2,3,4..m
printf("%d",maxp);
return 0;
}
