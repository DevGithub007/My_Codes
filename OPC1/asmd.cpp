#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int m,q,n,i,ans=0;
	char c;
	scanf("%lld%lld",&m,&q);
	while(q--)
	{
		scanf("%c%lld",&c,&n);
		switch(c)
		{
		case 'A':ans+=n;
		break;
		case 'S':ans-=n;
		break;
		case 'M':ans*=n;
		break;
		case 'D':ans/=n;
		break;		
		}
	}
	ans=ans%m;
	printf("%lld\n",ans);
	return 0;
}
