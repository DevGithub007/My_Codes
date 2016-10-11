#include<stdio.h>

int main()
{
long int t,x,p,n;
scanf("%ld",&t);

while(t--)
{
scanf("%ld %ld",&x,&p);
n=0;
if(x==1|| x<p)
x=0;

else
{
while(x>=p)
{
if(x%p!=0)
{
break;
}
else if(x%p==0)
{
x/=p;
if(x==1)
x=0;

n++;
}
}
}
printf("%ld %ld",n,x);

printf("\n");
}
return 0;
}
