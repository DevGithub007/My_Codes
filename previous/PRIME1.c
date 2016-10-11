#include<stdio.h>
#include<math.h>
int main()
{long long int t,i,j,a,c,b;
int prime[1000000];
scanf("%lld",&t);
while(t--)
{
scanf("%lld%lld",&a,&b);

for(i=0;i<b-a+1;i++)
prime[i]=0;
c=sqrt(b);
for(i=2;i<=c;i++)
{
                    j=a/i;
                    for(j*=i;j<=b;j+=i)
                    {             if(j!=i&&j>=a)
                                  prime[j-a]=1;
                    }
}
for(i=0;i<b-a+1;i++)
                    {if(prime[i]==0&&a+i!=1)
                    printf("%lld\n",a+i);
                    }
                    if(t)
                    printf("\n");
}
return 0;
}
