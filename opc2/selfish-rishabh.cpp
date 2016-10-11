#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,a[1000000],i;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		if((a[0]*a[1])>=(a[n-1]*a[n-2]))
		printf("%lld %lld\n",a[0],a[1]);
		else
		printf("%lld %lld\n",a[n-2],a[n-1]);
	}
	return 0;
}
