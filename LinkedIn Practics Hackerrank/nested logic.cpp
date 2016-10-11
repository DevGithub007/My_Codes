#include<bits/stdc++.h>
using namespace std;

int main()
{
	int da,ma,ya,de,me,ye;
	scanf("%d %d %d",&da,&ma,&ya);
	scanf("%d %d %d",&de,&me,&ye);
	
	long long fine=0;
	
	if(da<=de && ma<=me && ya<=ye)
	{
		fine=0;
	}
	else if(da>de && ma==me && ya== ye)
	{
		fine=15*(da-de);
	}
	else if(ma>me && ya==ye)
	{
		fine=500*(ma-me);
	}
	else if(ya>ye)
	fine=10000;
	
	printf("%lld\n",fine);
	return 0;
}
