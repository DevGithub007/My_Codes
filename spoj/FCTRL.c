#include<stdio.h>
main()
{
 long long t,n,count;
 scanf("%lld",&t);
 while(t--)
 {
 count=0;
 scanf("%lld",&n);
 while(n>=5)
 {
 count += n/5;
 n /= 5;
 }
 printf("%lld\n",count);
 }
 return 0;
}
