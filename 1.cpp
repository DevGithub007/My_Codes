#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,m;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&m);
		if((n>2*m)||m>2*n)
		printf("Player A wins\n");
		else
		printf("Player B wins\n");
	}
    return 0;
}
