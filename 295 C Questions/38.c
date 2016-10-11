#include<stdio.h>
#include<alloc.h>
#include<string.h>
main()
{
	char *x="this is a ";
	char y[]="sitter";
	char *z;
printf("%d %d",sizeof(x),sizeof(y));
	z=(char *)malloc(sizeof(x)+sizeof(y));
	strcpy(z,y);
	strcat(z,y);
	printf("%s+%s=%s",y,x,z);
}
