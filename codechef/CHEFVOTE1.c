#include<stdio.h>
 
int main()
{
	int t,n,i,j,a[55],b[55],k,l,tmp,c;
	scanf("%d",&t);
	while(t--)
	{
		k=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1,j=0;i<=n;i++)
		{
			j+=a[i];
			if(a[i]>=n)
			{
				k=1;
				goto down;
			}
		}
		if(j!=n)
		{
			k=1;
			goto down;
		}
		/*for(i=1,l=(i+1)%n;i<=n;i++)
		{
			tmp=1;
			for(c=1;l!=i && tmp==1 && c<=n;c++)
			{
				if(i!=l && a[l]>0)
				{
					a[l]--;
					tmp=0;
					b[i]=l;
				}
				l++;l%=n;
			}
			if(tmp==1)
			{
				k=1;goto down;
			}
		}*/
		for(i=1;i<=n;i++)
		{
			l=(i+2);tmp=(i+1);
			if(l>n)
				l=l-n;
			if(tmp>n)
				tmp=tmp-n;
			for(;l!=i;)
			{
				if(tmp>n)
					tmp=tmp-n;
				if(l!=i && a[l]>a[tmp] && a[l]>0)
				{
					tmp=l;
				}
				l++;
				if(l>n)
					l=l-n;	
			}
			a[tmp]--;b[i]=tmp;
		}
		for(i=1,j=0;i<=n;i++)
		{
			j+=a[i];
		}
		if(j!=0)
		{
			k=1;goto down;
		}
		down:
		if(k==1)
			printf("-1\n");
		else
		{
			for(i=1;i<=n;i++)
			{
				printf("%d ",b[i]);
			}
			printf("\n");
		}
	}
	return 0;

