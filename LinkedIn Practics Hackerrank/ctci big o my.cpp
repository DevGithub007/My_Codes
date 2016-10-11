#include<bits/stdc++.h>
using namespace std;

int main()
{
	int p;
	cin >> p;
	while(p--)
	{
		long long n;
		scanf("%lld",&n);
		
		long long i,j,k,f=0;
		if(n<=1)
            {
            printf("Not prime\n");
            break;
        }
		for(i=2;i<=sqrt(n);i++)
		{
			if(n%i!=0)
			continue;
            else
                {
                f=1;
                break;
            }
		}
        if(f==1)
         printf("Not prime\n");
        else
            printf("Prime\n");
        
		
	}
	return 0;
}
