#include<stdio.h>
#include<dos.h>
int argc
main(int argc, char *argv[])
{
	fun();
	return 0;
}
fun()
{
	int i;
	for(i=0;i< argc;i++)
        printf("%s",argv[i]);
}
