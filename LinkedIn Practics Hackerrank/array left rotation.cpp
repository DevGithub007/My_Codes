#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,d;
	scanf("%lld %lld",&n,&d);
	long long a[n];
	long long i,j;
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	
	for(i=d;i<n;i++)
	{
		printf("%lld ",a[i]);
	}
	
	for(i=0;i<d;i++)
	{
		printf("%lld",a[i]);
        if(i<d-1)
            printf(" ");
	}
	
	return 0;
}
