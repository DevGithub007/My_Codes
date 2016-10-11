#include<bits/stdc++.h>
using namespace std;
main()
{
	unsigned long l,i,j,k,f=0,p=0;
	char s[100001];
	cin>>s;
	int x,y;
	if((x=strstr(s,"ABA")-s)>=0 || (y=strstr(s,"BAB")-s)>=0)
	{
		printf("NO\n");
	}
	else {
		if((x=strstr(s,"AB")-s)>=0 && (y=strstr(s,"BA")-s)>=0)
		printf("YES\n");
		else
		{
			cout<<"NO\n";
		}
	}
return 0;
}
