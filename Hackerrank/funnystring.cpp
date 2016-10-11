#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long i,j,flag,n;
		char s1[10005]={0};
		scanf("%s",s1);
		n=strlen(s1);
		flag=0;
		for(i=1,j=n-1;i<n;i++,j--)
		{
			if(abs(s1[i]-s1[i-1])!=abs(s1[j]-s1[j-1]))
			{
			flag=1;
			break;
			}
		}
		if(flag==0)
		printf("Funny\n");
		else if(flag==1)
		printf("Not Funny\n");
	}
	
	return 0;
}
