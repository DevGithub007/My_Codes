#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t,n,m,a[1000],b[1000],c[1000],i,p,q,sum_max,sum_min;
	scanf("%lld",&t);
	while(t--)
	{
	scanf("%lld %lld",&n,&m);
	sum_max=0,sum_min=0;
	p=n,q=n;
	for(i=0;i<m;i++)
	{
	scanf("%lld",&a[i]);
	}
	sort(a,a+m);
	for(i=0;i<m;i++)
	{
		b[i]=a[i];
		c[i]=a[i];
	}
	i=0;
	while(p>0)
	{
		if(b[i]>0)
		{
			sum_min+=b[i];
			--b[i];
			--p;
		}
		else
		{
			++i;
		}
	}
	i=m-1;
	while(q>0)
	{
		if(c[i]>=c[i-1])
		{
			sum_max+=c[i];
			--c[i];
			--q;
		}
		else
		{
			--i;
		}
	}
	printf("%lld %lld\n",sum_max,sum_min);
	}
	return 0;
}
