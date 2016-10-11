#include<stdio.h>
int main()
{
int t;
long long int n,i,count,a[100001],b[100001];
scanf("%d",&t);
while(t--)
{
count=0;
scanf("%lld",&n);
for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
b[i]=0;
}
for(i=1;i<n;i++)
{
if(a[i-1]!=a[i])
{
if((b[i-1]!=0) /*&& (b[i]!=0)*/)
{
count+=1;
b[i]++;
}
else
{
count+=2;
b[i-1]++;
b[i]++;
}
/*if((i-2)!=0)
{
if( (a[i-2] != a[i-1]) && (a[i-1] != a[i]))
--count;
}*/

}
}
printf("%lld\n",count);
}
return 0;
}
