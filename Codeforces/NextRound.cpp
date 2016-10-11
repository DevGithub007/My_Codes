#include<bits/stdc++.h>
using namespace std;
main()
{
	
	int n,k,a[50],i,j,count=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	j=a[k-1];
	if(n>=k)
	{
		
		
		for(i=0;i<n;i++)
		{
			if(a[i]>=j && a[i]>0)
			count++;
		}
		
	}
	printf("%d",count);
}
