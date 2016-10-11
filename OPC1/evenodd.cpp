#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a[1000],i,j,k,sum1=0,sum2=0,diff;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		if(i%2!=0)
		sum1+=a[i];
		else
		sum2+=a[i];
	}
	diff=abs(sum1-sum2);
	printf("%lld\n",diff);
	return 0;
}
