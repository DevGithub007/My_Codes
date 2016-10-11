#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,d[100],i,j,k,count;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&d[i]);
}
sort(d,d+n);
count=n;
for(i=1;i<n;i++)
{
if(d[i-1]==d[i])
count--;
}
printf("%d\n",count);
}
return 0;
}
