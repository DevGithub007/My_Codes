#include<stdio.h>
long t,n,a[100002],sum=0,l,d;
void subset(long,long,long);
int main()
{
long i,j,k,no_of_element,no_of_subset,start,index;
scanf("%ld",&t);
while(t--)
{
scanf("%ld",&n);
no_of_element=n;
for(i=0;i<n;i++)
{
scanf("%ld",&a[i]);
sum+=a[i];
}
for(no_of_subset=2;no_of_subset<=no_of_element;no_of_subset++)
{
for(start=0;start<=no_of_element-no_of_subset;start++)
{
index=start+no_of_subset-1;
for(j=index;j<no_of_element;j++)
{
l=a[start];
for(i=start+1;i<index;i++)
l^=a[i];
l^=a[j];
sum+=l;
}
}
}
}
sum%=1000000007;
printf("%ld",sum);
printf("\n");
return 0;
}
