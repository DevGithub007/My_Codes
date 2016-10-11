#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,x,i,j,count=0;
	cin >>n;
	for(i=0;i<=n;i++)
	{
		if((n+i)==(n^i))
		{
		//	printf("%lld ",i);
			++count;
		}
	}
	printf("%lld\n",count);
	return 0;
}
