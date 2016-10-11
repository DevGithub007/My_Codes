#include<stdio.h>
#include<math.h>
void main()
{
int t;
long long n,i,j,k,sum;
scanf("%d",&t);
while(t--)
{
sum=0;
scanf("%lld",&n);
j=sqrt(n);
for(i=1;i<=j;i++)
{
if(n%i==0)
sum=(sum+i+(n/i));
}
if(j*j==n)
sum=(sum-(i-1));
printf("%lld\n",sum);
}
}
