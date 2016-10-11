#include <stdio.h>
main()
{
    int N,j,n,x,i,m;
    scanf ("%d",&N);
    for (j=1; j<=N; j++)
    {
        scanf("%d %d",&n,&m);
        //for (i=1; i<=n; i++)
        {i=n;
            x=m*i;
            while (x>n)
                x=((m*(x-n)-1)/(m-1));
        }
        printf ("Case %d: %d\n",j,x);
    }
}
