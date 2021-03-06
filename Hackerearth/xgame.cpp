#include<iostream>
#include<stdio.h>
#define M 1000000007
 
using namespace std;
 
int mod(int a,long b,long c)
{
    long long x=1,y=a;
    while(b)
    {
        if(b%2==1)
            x=(x*y)%c;
        y=(y*y)%c;
        b/=2;
    }
    return x%c;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        long n1,s=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%ld",&n1);
            s |= n1;
        }
        printf("%ld\n",(mod(2,n-1,M)*s)%M);
    }
    return 0;
}
