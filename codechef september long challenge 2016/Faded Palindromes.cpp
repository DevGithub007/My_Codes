#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		char str[12350]={0},ch;
		int f=0;
		scanf("%s",str);
		long long l,i,j,k,m,n;
		l=strlen(str);
		if(l%2!=0)
		{
			if(str[((l+1)/2)-1]=='.')
			str[((l+1)/2)-1]='a';
			
			for(i=(l+1)/2-2,j=(l+1)/2;i>=0 && j<l;i--,j++)
		{
			if((str[i]!=str[j]) ||(str[i]=='.' && str[j]=='.'))
			{
				if(str[i]=='.' && str[j]=='.')
				str[i]=str[j]='a';
				else if(str[i]=='.')
				str[i]=str[j];
				else if(str[j]=='.')
				str[j]=str[i];
				else
				f=-1;
			}
			else continue;
		}
		if(f==-1)
		printf("-1\n");
		else
		printf("%s\n",str);
		}
		else if(l%2==0)
		{
			for(i=(l/2)-1,j=(l/2);i>=0 && j<l;i--,j++)
			{
			if((str[i]!=str[j]) ||(str[i]=='.' && str[j]=='.'))
			{
				if(str[i]=='.' && str[j]=='.')
				str[i]=str[j]='a';
				else if(str[i]=='.')
				str[i]=str[j];
				else if(str[j]=='.')
				str[j]=str[i];
				else
				f=-1;
			}
			else continue;	
			}
			
		if(f==-1)
		printf("-1\n");
		else
		printf("%s\n",str);
		}
		
		
	}
	return 0;
}
