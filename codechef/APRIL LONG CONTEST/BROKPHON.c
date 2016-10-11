#include<stdio.h>
int main()
{
int t;
long long int n,i,count,a[100001],b,c;
scanf("%d",&t);
while(t--)
{
count=0;
scanf("%lld",&n);
for(i=0;i<n;i++)
{scanf("%lld",&a[i]);}
b=a[0];
c=a[n-1];
if(b!=c)
{
for(i=1;i<n;i++)
{
if(b==a[i])
continue;
else
{
count=(count+(n-i))%100001;
break;
}
}
}
else if(b==c)
{
for(i=1;i<n-1;i++)
{
if(b==a[i])
continue;
else
{
count=(count+((n-1)-i))%100001;
break;
}
}
}
printf("%lld",count);
printf("\n");
}
return 0;
}
