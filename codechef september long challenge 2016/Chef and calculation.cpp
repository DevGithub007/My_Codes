#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		long long n,i,j,k;
		scanf("%lld",&n);
		long long count[100]={0},count1[100]={0};
		for(i=0;i<n;i++)
		{
		long long cc=0,ss[6]={0},nn,p;
		scanf("%lld",&nn);
		count[i]+=nn;		
		for(j=0;j<nn;j++)
		{
			scanf("%lld",&p);
			p=p-1;
			++ss[p];
		}
		for(k=0;k<6;k++)
		{
		if(ss[k])
		++cc;	
		}
		if(cc<4)
		count[i]=count[i];
		else if(cc==4)
		count[i]+=1;
		else if(cc==5)
		count[i]+=2;
		else
		count[i]+=4;
		
		count1[i]=count[i];
		}
		sort(count1,count1+n);
		if(count1[n-1]==count1[n-2])
		printf("tie\n");
		else
		{
			long long ppp=count1[n-1];
			for(i=0;i<n;i++)
			{
				if(count[i]==ppp)
				{
					if(i==0)
					printf("chef\n");
					else
					printf("%lld\n",i+1);
					break;
				}
			}
		}
	}
	return 0;
}
