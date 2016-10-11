#include<stdio.h>
long t,n,a[100002],sum=0,l,d;
void subset(long,long,long);
int main()
{
long i,j,k;
scanf("%ld",&t);
while(t--)
{
scanf("%ld",&n);
for(i=0;i<n;i++)
{
scanf("%ld",&a[i]);
}
for(d=1;d<=n;d++)
subset(0,0,d);
sum%=1000000007;
printf("%ld",sum);
printf("\n");
}
return 0;
}

void subset(long start,long index,long no_of_subset)
{
long i,j,k,m,p,q;
if(index-start+1==no_of_subset)
{
if(no_of_subset==1)
{
for(i=0;i<n;i++)
sum+=a[i];
}
else
{
for(j=index;j<n;j++)
{
l=a[start];
for(i=start+1;i<index;i++)
l^=a[i];
l^=a[j];
sum+=l;
}
if(start!=n-no_of_subset)
subset(start+1,start+1,no_of_subset);
}
}
else
{
subset(start,index+1,no_of_subset);
}
}
