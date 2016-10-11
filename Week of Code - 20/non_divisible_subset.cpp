#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,a[100005],i,j,count=0;
	scanf("%lld %lld",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n && i!=j;j++)
		{
			if((a[i]+a[j])%k!=0)
			count++;
		}
	}
	printf("%lld\n",count);
}
