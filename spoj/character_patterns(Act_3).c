#include<stdio.h>
int main()
{
long long t,l,c,i,j,k,p,q,r,s;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&l,&c);
		p=(3*l+1);
		q=(3*c+1);
		for(i=1,r=1;i<=p;i++)
		{
			for(j=1,k=1;j<=q;j++)
			{
				if(i==r)
				{
					printf("*");
				}
				else 
				{
				if(j==k)
				{
				printf("*");
				k+=3;
			    }
				else
				printf(".");
			    }
			}
			printf("\n");
			if(i==r)
			r+=3;
		}
		printf("\n");
	}
	return 0;
}
