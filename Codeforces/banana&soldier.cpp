#include<bits/stdc++.h>
using namespace std;
int main()
{
long int k,n,w,sum,rem,i,j;
scanf("%ld %ld %ld",&k,&n,&w);
sum=0;
/*for(i=1;i<=w;i++)
{
sum+=i*k;
}*/
sum=(w*(w+1)*k)/2;
rem=sum-n;
if(rem<0)
rem=0;
printf("%ld",rem);
return 0;
}
