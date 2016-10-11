#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,k,m,e,i,j,l,p;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld",&n,&k,&e,&m);
		long long a[n-1]={0};
		for(i=0;i<n-1;i++)
		{
		for(j=0;j<e;j++)
		{
			scanf("%lld",&p);
			a[i]=a[i]+p;
		}
		}
		long long q=0,r;
		for(i=0;i<e-1;i++)
		{
			scanf("%lld",&r);
			q=q+r;
		}
		//sort(a,a+(n-1));
		sort(a,a+(n-1));
		long long ans;
		
		 if(q>a[n-k-1])
		 printf("0\n"); 
	else
    {
		ans=a[n-k-1]-q+1;
		if(ans>=0 && ans<=m)
		printf("%lld\n",ans);
		else
		printf("Impossible\n");
	}
	}
	return 0;
}
