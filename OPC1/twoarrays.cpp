#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a[100000],b[100000],i,j,k,sum=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%lld",&b[i]);
	}
	sort(a,a+n);
	sort(b,b+n);
	for(i=0,j=n-1;i<n;i++,j--)
	{
		sum+=a[i]*b[j];
	}
	printf("%lld\n",sum);
	return 0;
}
