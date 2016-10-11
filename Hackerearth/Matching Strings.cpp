#include<bits/stdc++.h>
using namespace std;
main()
{
	long t,l,m,n,count,i;
	scanf("%ld",&t);
	while(t--)
	{
		char a[501]={0},b[501]={0};
		scanf("%s",a);
		scanf("%s",b);
		l=strlen(a);
		m=strlen(b);
		n=(l<m?l:m);
		count=0;
		for(i=0;i<n && a[i]!='\0'&& b[i]!='\0';i++)
		{
			if(a[i]==b[i])
			count++;
		}
		printf("%ld\n",count);
	}
}
