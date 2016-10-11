#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,i;
	long long sum=0,a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	printf("%lld\n",sum);
}
