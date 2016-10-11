#include<stdio.h>
Swap( int *x , int *y)
{
	int tmp = *y ;
	*y = *x ;
	*x = tmp;
}
main()
{
	int a = 2, b = 3;
	Swap(&a, &b);
	printf("%d %d\n", a, b);
 }
