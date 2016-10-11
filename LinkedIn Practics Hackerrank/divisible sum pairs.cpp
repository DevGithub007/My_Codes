#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,k,i,j;
	scanf("%lld %lld",&n,&k);
	long long a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	long long sum=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])%k==0)
			++sum;
		}
	}
	printf("%lld\n",sum);
	return 0;
}
