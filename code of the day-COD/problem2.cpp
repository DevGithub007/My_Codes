#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,ans,d,p;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==4)
		ans=24;
		else
		ans=24*5*(n-4);
		printf("%lld\n",ans);
	}
	return 0;
}
