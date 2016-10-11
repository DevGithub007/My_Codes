#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n,k;
		scanf("%lld %lld",&n,&k);
		
		long long i,j;
		
		long long max = 0;
        long long a = n - 1; 
        while(a-- > 0) {
            for(long long b = a + 1; b <= n; b++){
                int test = a & b;
                if( 	test < k 
                	&& 	test > max ){
                    max = test;
                }
            }
        }
		printf("%lld\n",max);
	}
	return 0;
}
