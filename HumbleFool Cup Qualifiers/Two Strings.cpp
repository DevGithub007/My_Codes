#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i,j,k,l,m;
	scanf("%d",&t);
	while(t--)
	{
		int a[26]={0},b[26]={0},sum=0,sum1=0;
		long long ans=1;
		char s[51]={0};
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			a[s[i]-'a']=1;
			++b[s[i]-'a'];
			
		}
		for(i=0;i<26;i++)
		{
			if(a[i]==1)
			++sum;
			sum1+=b[i];
		}
		if(sum==1 && l==sum1)
		printf("%lld\n",ans);
		else
		{
			ans=pow(2,sum);
			printf("%lld\n",ans);
		}
	}
	return 0;
}
