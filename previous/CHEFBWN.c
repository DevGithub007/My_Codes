#include<stdio.h>

main()
{
    int t;
    long int n,m,l,r,a[100000],i,j,k;

    scanf("%d",&t);

    while(t--)
    {
        scanf("\n%ld %ld",&n,&m);

        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
    
        }

        while(m--)
        {
            scanf("\n%ld %ld",&l,&r);

            for(i=l-1;i<r;i++)
            {
                a[i]+=1;
            }
        }
        printf("\n");
        k=n-1;
		for(i=0;i<n;i++)
        {
            printf("%ld",a[i]);
            if(k--)
            printf(" ");
        }
    }
}
