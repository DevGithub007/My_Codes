#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,a[102],i,j,count=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])%k==0)
			count++;
		}
	}
	printf("%d\n",count);
}
