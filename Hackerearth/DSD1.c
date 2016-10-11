#include<stdio.h>
#include<math.h>
long digitsum(long);
main()
{
long t,l,r,count,sum,i,j,k,n,m;
scanf("%ld",&t);
while(t--)
{
count=0; sum=0;
scanf("%ld %ld",&l,&r);
for(i=l;i<=r;i++)
{
if(i % digitsum(i)==0)
count++;
}
printf("%ld\n",count);
}
}

long digitsum(long n)
{
long sum=0,i,j,k;
long  p,q,r,s,t;
p=n;
k=floor(log(n)/log(10));
for(i=0;i<=k;i++)
{
	q=pow(10,i+1);
	r=pow(10,i);
	s=pow(10,i);
sum=sum+((p % q)-(p % r))/(s);
}
return(sum);
}
