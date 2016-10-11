#include<stdio.h>
long t,x,i,j,k,l;
long fact(long);
void main()
{
scanf("%ld",&t);
while(t--)
{
long count=0;
scanf("%ld",&x);
l=fact(x);
while(l>0)
{
l/=10;
count=(count+1)%10000007;
}
printf("%ld\n",count);
}
}

long fact(long x)
{
if(x==0 || x==1)
return(1);
else
return((x*fact(x-1))%10000007);
}
