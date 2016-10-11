#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		long long n,x;
		scanf("%lld %lld",&n,&x);
		long long a[n],i,j,k;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		long long p,q;
		p=a[n-1],q=a[0];
		if(p<=x*q)
		printf("0\n");
		else
		{
			for(i=0;i<n-1;i++)
			{
			for(j=n-1; j>=0;j--)
			{
			    p=a[j];
				q=a[i];
				if(p<=x*q)
				{
					printf("%lld\n",(i+(n-1)-j));
					break;
				}
			
			}
			if(p<=x*q)
				{
					//printf("%lld\n",(i+(n-1)-j));
					break;
				}
			}
		}
	}
	return 0;
}
