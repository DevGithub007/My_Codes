
#include<stdio.h>
main()
{
	int a=100;
	int *b;
	b=&a;
	//b=200;
	printf("b=%d\na=%d\n&a=%d\n*b=%d\nb++=%d",b,a,&a,*b,(b+1));
}
