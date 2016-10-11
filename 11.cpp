#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,q,k,t[100005],s[100005],i;
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++)
	scanf("%d",&t[i]);
	
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
	
	reverse(t,t+n);
	
	while(q--)
	{
		long int sum=0;
		scanf("%d",&k);
		for(i=0;i<k;i++)
		sum+=t[i];
		printf("%d\n",sum);
	}
	return 0;
}

