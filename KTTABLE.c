#include<stdio.h>
int main()
{
long long tt,n,aaa[10001],bbb[10001],i,j,k,l,m;
scanf("%lld",&tt);
while(tt--)
{
long long cn=0;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lld",&aaa[i]);
}

for(i=0;i<n;i++)
{
scanf("%lld",&bbb[i]);
}


if(bbb[0]<=aaa[0])
cn++;

for(i=1;i<n;i++)
{
if((bbb[i])<=(aaa[i]-aaa[i-1]))
cn++;
}
printf("%lld\n",cn);
}
return 0;
}
