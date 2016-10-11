#include<stdio.h>
int main()
{
long int t,n,p,power[1000005],i,j,k;
int f;
long long int sum;
scanf("%ld",&t);
while(t--)
{
scanf("%ld %ld",&n,&p);
//printf("\n");
k=n-1;
f=0;
sum=0;
for(i=0;i<n;i++)
{
scanf("%ld",&power[i]);
//if(--k)
//printf(" ");
if(power[i]==p)
f=1;
}
if(f==0)
printf("NO %lld",sum);
else if(f==1)
{
for(i=0;i<n;i++)
{
if(power[i]>p)
sum+=1;
}
printf("YES %lld",sum);
}
printf("\n");
}

return 0;
}
