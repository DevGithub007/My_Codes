#include<bits/stdc++.h>
using namespace std;

int main()
{
long long t,n,a[10005],b[10005],i,j,k;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
}

for(i=0;i<n;i++)
{
scanf("%lld",&b[i]);
}

long long count=0;
if(b[0]<=a[0])
count++;

for(i=1;i<n;i++)
{
if((b[i])<=(a[i]-a[i-1]))
count++;
}
printf("%lld\n",count);
}
return 0;
}
