#include<bits/stdc++.h>
using namespace std;
int divisible(long long);
int main()
{
	char a[100005],b[100005],ch;
	long long q,i,j,k,n;
	scanf("%s",a);
	scanf("%lld",&q);
	while(q--)
	{
		long long l,r;
		scanf("%lld %lld",&l,&r);
		for(i=l-1,j=0;i<=r-1;i++,j++)
		{
			b[j]=a[i];
		}
		b[j]='\0';
		sscanf(b,"%lld",&n);
		
		//printf("%lld\n\n",n);
		if(divisible(n))
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}

int divisible( long long num )
{
    if( num < 0 )
        return divisible( -num );
    if( num == 0 || num == 7 )
        return 1;
    if( num < 10 )
        return 0;
    return divisible( num / 10 - 2 * ( num - num / 10 * 10 ) );
}
