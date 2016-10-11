#include<stdio.h>
int main()
{
	long int a=1,b=200;
	int i,j,flag=1;
	//printf(":(2)");
	//scanf("%ld",&b);
	//printf("%ld\n",b);
	//for(i=0;i<10;i++)
	{
	
	//printf("enter a b:");
	//scanf("%ld %ld",&a,&b);
	//printf("entered a b:%ld %ld\n",a,b);
	
	{
	
	for(a;a<=b;a++)
	{
		
		for(j=2;j<=a/2;j++)
		{
			if(!(a%j))
			{
				flag=0;
				break;
			}
		}
		if(flag)
			printf("%ld\n",a);
		else
			flag=1;	
	}
	printf("\n");
	}
}
}
