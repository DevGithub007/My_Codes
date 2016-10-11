#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	scanf("%lld",&n);
	
	long long maxl=0,len=0;
	while(n>0)
	{
	if(n%2==1)
	len++;
	else
	len=0;
	if(len>maxl)
	maxl=len;
	n/=2;	
	}
	printf("%lld\n",maxl);
	return 0;
}
