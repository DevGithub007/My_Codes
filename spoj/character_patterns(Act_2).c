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
				if(i==1 || i==l || j==1 || j==c)
				printf("*");
				else
				printf(".");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
