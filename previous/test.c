#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isPrime(long long);
main()
{
	long long i,m;
while(1)
{
scanf("%lld",&m);
for(i=2;i<=m;i++)
{
if(isPrime(i))
{if(m%i==0)
printf("%lld\n",i);
}
}
}
}
bool isPrime(long long n) 
{
    long long j;
     if (n <= 3) {
     return n > 1;
    }
 
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
 
    for (j = 5; j * j <= n; j += 6) {
        if (n % j == 0 || n % (j + 2) == 0) {
            return false;
        }
    }
 
    return true;
}

