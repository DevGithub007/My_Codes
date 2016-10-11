#include<stdio.h>
#include<math.h>
main()
{
int t;
long long ans,n;
scanf("%d",&t);
while(t--)
{
ans=0;
scanf("%lld",&n);
if(n<4)
printf("1\n");
else
{
ans=ceil(log10(2*3.141592653589793*n)/2 + n*log10(n/2.7182818284590452353));
printf("%lld\n",ans);
}
}
}
