#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,q,l,k,i,j,count,a[100000];
	scanf("%lld %lld",&n,&q);
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	while(q--)
	{
		count=0;
		scanf("%lld %lld",&l,&k);
		for(i=0;i<n && count!=k;i++)
		{
			if(a[i]>=l)
			++count;
		}
		--i;
		printf("%lld\n",a[i]);
	}
	return 0;
}
