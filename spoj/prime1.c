#include<stdio.h>
#include<stdbool.h>
bool isPrime(long long);
long long t,n,m,j,k,l;
void main()
{
scanf("%lld",&t);
while(t--)
{
scanf("%lld %lld",&n,&m);
for(j=n;j<=m;j++)
{
if(isPrime(j)==true)
printf("%lld\n",j);
}
printf("\n");
}	
}

bool isPrime(long long n) 
{
    long long i;
     if (n <= 3) {
     return n > 1;
    }
 
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
 
    for (i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
 
    return true;
}
