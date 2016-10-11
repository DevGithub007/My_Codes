#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	scanf("%lld",&n);
	
	char s[n][100],s1[100],p[n][100];
	
	long long i,j,f;
	for(i=0;i<n;i++)
	{
		scanf("%s %s",s[i],p[i]);
	}
	
	while(scanf("%s",s1)!=-1)
	{
		f=0;
		for(i=0;i<n;i++)
		{
			if(strcmp(s[i],s1)==0)
			{
				printf("%s=%s\n",s[i],p[i]);
				f=1;
				break;
			}
		}
		if(f==0)
		printf("Not found\n");
		else
		continue;
	}
	return 0;
}
