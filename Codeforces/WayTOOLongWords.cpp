#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,l;
	char s[101],c,str[101];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",s);
		l=strlen(s);
		if(l>10)
		{
			sprintf(str,"%c%d%c",s[0],l-2,s[l-1]);
			printf("%s\n",str);
		}
		else
		printf("%s\n",s);
	}

}
