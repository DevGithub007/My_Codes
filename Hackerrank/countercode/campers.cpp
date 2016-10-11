#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,p,q,r,s,t=1,u,v,i,j,sum=0,a[10001],b[10001];
	scanf("%lld %lld",&n,&k);
	for(i=0;i<k;i++)
	scanf("%lld",&a[i]);
	//r=k+1;
	sort(a,a+k);
	if(n%2==0)
	sum=n/2;
	else
	{
        sum+=(a[0]-1)/2;
        sum+=(n-a[k-1])/2;
		for(i=1;i<k;i++)
		{
			if((r=(a[i]-a[i-1]))%2!=0)
			{
				sum+=(r+1)/2;
			}
			else
			{
			sum+=(r-1)/2;	
			
			}
		}
		//if(t==0)
		//sum=(n-1)/2;
		//else
		//sum=(n+1)/2;
	}
	printf("%lld\n",sum);
	return 0;
}
