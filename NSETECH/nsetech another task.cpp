#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	scanf("%lld",&n);
	long long a[n],asum[n],i,j,k,sum=0;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		sum+=a[i];
		asum[i]=sum;
	}
	long long q;
	long double b,c;
	scanf("%lld",&q);
	while(q--)
	{
		scanf("%Lf %Lf",&b,&c);
		long double ll=(b/c)*asum[n-1];
		long long lll=ll;
		
		long double min=fabs(lll-asum[0]);
		long long ii=0;
		for(i=1;i<n;i++)
		{
			if((fabs(lll-asum[i])) <min)
			{
				
			ii=i;
			min=fabs(ll-asum[0]);
		}
		}
		printf("%lld\n",ii+1);
	}
	return 0;
}
