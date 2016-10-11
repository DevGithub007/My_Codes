#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a[100000],p[100000],b[100000],t,i,j,k;
	scanf("%lld %lld",&n,&t);
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&p[i]);
	}
	while(t--)
	{
		for(i=1;i<=n;i++)
		{
		b[i]=a[i];
	}
	for(i=1;i<=n;i++)
	{
		a[i]=b[p[i]];
	}
	}
	for(i=1,j=n-1;i<=n;i++,j--)
	{
		printf("%lld",a[i]);
		if(j>0)
		printf(" ");
	}
	//printf("\n");
	return 0;
}
