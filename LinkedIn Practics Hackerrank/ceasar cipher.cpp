#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	char s[n+1]={0};
	int k;
	scanf("%s",s);
	scanf("%d",&k);
	int l=strlen(s);
	int i;
	for(i=0;i<l;i++)
	{
		if(( s[i]>='a'&&s[i]<='z') )
		{
			s[i]='a'+(s[i]+k-'a')%26;
		}
		else if(( s[i]>='A'&&s[i]<='Z') )
		{
			s[i]='A'+(s[i]+k-'A')%26;
		}
		else
		continue;
	}
	printf("%s\n",s);
	return 0;
}
