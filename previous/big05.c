#include<stdio.h>
int main()
{
long long int t,n,a,i,j,k,mult;
scanf("%lld",&t);
while(t--)
{
mult=1;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lld",&a);
mult=(mult*a)%1000000007;
}
printf("%lld\n",mult);
}
return 0;
}
