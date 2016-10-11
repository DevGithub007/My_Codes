#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,m,n,i,j;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&m);
		scanf("%lld",&n);
		long long a[n+1];
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
		}
		
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				if((a[i]+a[j])==m)
				printf("%lld %lld\n",i,j);
			}
		}
	}
	return 0;
}
