#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a[10000],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=0 && a[i]<=25)
		{
		printf("%c",'a'+a[i]);
		}
		else if(a[i]==-3)
		printf("%c",'.');
		else if(a[i]==-2)
		printf("%c",' ');
		else if(a[i]==-1)
		printf("\n");
	}
	return 0;
}
