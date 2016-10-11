#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int k,i,j,m,l,index,f;
	char s[1005];
	scanf("%s",s);
	scanf("%ld",&k);
	l=strlen(s);
	if(l%k!=0)
	{
		printf("NO\n");
	}
	else
	{
		f=0;
		index=l/k;
		for(i=0;i<l;i=i+index)
		{
			for(j=i,m=(i+index)-1;j<=m;j++,m--)
			{
				if(s[j]!=s[m])
				{
					f=1;
					break;
				}
			}
			if(f==1)
			break;
		}
	if(f==1)
	printf("NO\n");
	else
	printf("YES\n");
	}

}
