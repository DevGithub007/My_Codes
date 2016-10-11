#include<stdio.h>
int main()
{
long long t,l,c,i,j,k,p,q,r,s,h,w;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld",&l,&c,&h,&w);
		p=(l*h+l+1);
		q=(c*w+c+1);
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
				k+=w+1;
			    }
				else
				printf(".");
			    }
			}
			printf("\n");
			if(i==r)
			r+=h+1;
		}
		printf("\n");
	}
	return 0;
}
