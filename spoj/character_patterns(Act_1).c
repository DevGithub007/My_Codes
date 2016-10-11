#include<stdio.h>
int main()
{
long long t,l,c,i,j,k;
	scanf("%lld",&t);
	while(t--)
	{
		//int p=1;
		scanf("%lld %lld",&l,&c);
		for(i=1;i<=l;i++)
		{
			for(j=1;j<=c;j++)
			{
				if(i%2!=0)
				{
					if((j)%2!=0)
				printf("*");
				else
				printf(".");
				}
				else
				{
				if((j)%2==0)
				printf("*");
				else
				printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
