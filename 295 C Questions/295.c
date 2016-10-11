#include<stdio.h>
main()
{
	union alpha
	{
		int a;
		float b;
	} u1,u2;
	
	u1.b=9.00000;
	u1.a=12;
	u2.a=0;
	u2.b=00.0000;
	printf("%d %f %d %f",u1.a ,u1.b,u2.a,u2.a/u2.b);
}
