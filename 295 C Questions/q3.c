#include<stdio.h>
int main()
{	int count=0,i,j;
	char a[20],b[10];
	for(j=0;j<24;j++)
		{
 		for(i=0;i<10;i++)
			scanf("%c",&a[i]);
		for(i+=1;i<15;i++)
			scanf("%c",&b[i-11]);
		for(i=0;i<10;i++)
		{
		for(j=0;j<5&&a[j]==b[i];j++)
			{
			count++;
			i++;
			}
		if(count==5)
			{
			break;
			printf("%d\n",'1');
			}
		}
		if (count!=0)
			printf("%d\n",0);
	}
	printf("%s",a);
	printf("\n%s",b);
}

