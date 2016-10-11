#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a,b,c,d,i,j,k;
	scanf("%lld",&n);
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			d=n/i;
			if((i<=d)&&(i*d==n))
			printf("%lld %lld\n",i,d);
		}
	}
	return 0;
}
