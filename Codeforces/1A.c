#include<stdio.h>
#include<math.h>
main()
{
long int n,m,a;
scanf("%ld %ld %ld",&n,&m,&a);
printf("%ld\n",((ceil(n/(double)a))*(ceil(m/(double)a))));
}
