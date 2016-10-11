#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,r,c,m,k,j;
	long long ii,jj,kk,ll,a,b;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld %lld",&r,&c,&m,&k,&j);
		long long f=0,f1=0,f2=0,f3=0;
		long long mult=r*c;
		/*long long arr[3];
		arr[0]=m,arr[1]=k,arr[2]=j;
		sort(arr,arr+3);
		m=arr[2],k=arr[1],j=arr[0];*/
		
		if(m>k && m>j)
		m=m;
		else if(k>m && k>j)
		m=k;
		else
		m=j;
		
		if(k>j)
	    {
	    		k=k;
		}
		else
		{
			long long temp=k;
			k=j;j=temp;
		}
		//printf("%lld %lld %lld",m,k,j);
		if(mult==(m+k+j))
		{
			//printf("1\n");
			if(m%r==0)
			{
			a=r;
			b=m/r;
			if((m%b==0)&&(a*b==m))	
			{
		    f1=1;
		    c=c-b;
			}
			//printf("f1.1\n");
			}
			else if(m%c==0)
			{
			a=c;
			b=m/c;
			if((m%b==0)&&(a*b==m))	
			{
				f1=1;
				r=r-a;
			}
			//printf("f1.2\n");	
			}
			
			if(k%r==0)
			{
			a=r;
			b=k/r;
			if((k%b==0)&&(a*b==k))	
			{
				f2=1;
				c=c-b;
			}
			//printf("f2.1\n");
			}
			else if(k%c==0)
			{
			a=c;
			b=k/c;
			if((k%b==0)&&(a*b==k))	
			{
				f2=1;
				r=r-a;
			}
			//printf("f2.2\n");	
			}
			
			if(j%r==0)
			{
			a=r;
			b=j/r;
			if((j%b==0)&&(a*b==j))	
			{
				f3=1;
				c=c-b;
			}
			//printf("f3.1\n");
			}
			else if(j%c==0)
			{
			a=c;
			b=j/c;
			if((j%b==0)&&(a*b==j))	
			{
				f3=1;
				r=r-a;
			}
			//printf("f3.2\n");
			}
			if(f1==1 && f2==1 && f3==1)
			f=1;  	
		}
		if(f==1)
		printf("Yes\n");
		else if(f==0)
		printf("No\n");
	}
	return 0;
}
