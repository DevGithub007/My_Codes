#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n;
	scanf("%lld",&t);
	while(t--)
	{
		long long int i,j,k,a[10]={0},p,q,r;
		scanf("%lld",&n);
		k=0;
		if(n==0)
		printf("Case #1: INSOMNIA\n");
		else
		{
		while( !(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1 && a[5]==1 && a[6]==1 && a[7]==1 &&a[8]==1 && a[9]==1))
		{
		    p=(++k)*n;
		    r=p;
		    while(p!=0)
			{
				q=p%10;
			    p/=10;
			    long long pp=q-'0';
			    a[pp]=1;
		    } 
		}
		printf("Case #%lld: %lld\n",t,r);
	  }
	}
}
