#include<stdio.h>

int main()
{
long  t,n;
scanf("%ld",&t);
while(t--)
{
long zn=0,i;
scanf("\n%ld",&n);
for(i=5;i<=n;i*=5)
{
zn+=n/i;
}
printf("\n%ld",zn);
}
return 0;
}
