#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,i,*ptr;
	ptr=(int *)malloc(5*sizeof(int));
	printf("enter 5 values:\n");
	for(i=0;i<4;i++){
		scanf("%d ",ptr+i);
		printf("%d ",ptr+i);}
		//scanf("%d ",&ptr[i]);
	printf("\nentered values:");
	for(i=0;i<5;i++)
		printf("%d ",*ptr+i);
		//printf("%d ",ptr[i]);
		printf("\n%d\n",ptr++);
		printf("\n%d\n",ptr+i);
		free (ptr);
}
