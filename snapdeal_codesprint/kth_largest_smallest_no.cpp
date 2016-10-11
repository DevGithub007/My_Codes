#include<bits/stdc++.h>
using namespace std;
long long position(long long ,long long ,long long );
int main()
{
	long long n,q,a[5000],x,k,type,i,j,l,m,o,p;
	scanf("%lld %lld",&n,&q);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	while(q--)
	{
	scanf("%lld %lld %lld",&x,&k,&type);
    switch(type)
    {
    	case 0 :
    long long pos=position(a,n,x);
		if(pos+k>n-1)
		printf("-1\n");
		else
		printf("%lld\n",a[pos+k]);
		break;
		
		case 1 :
		pos=position(a,n,x);
		if(pos-k<0)
		printf("-1\n");
		else
		printf("%lld\n",a[pos-k]);
		break;
	}
	}
	return 0;
}
long long position(long long b[],long long n,long long x)
{
	long long first,last,middle;
	first=0;last=n-1;
	while(first<=last)
	{
		middle=(first+last)/2;
		if(b[middle]<x)
		first=middle+1;
		else if(b[middle]==x)
		return middle;
		else
		last=middle-1;
	}
}
