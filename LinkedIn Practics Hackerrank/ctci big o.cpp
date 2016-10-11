#include<bits/stdc++.h>
using namespace std;
bool prime(long long n)
    {
    if (n <= 1)
        return false;
    else if (n <= 3)
        return true;
    else if (n % 2 == 0 || n % 3 == 0)
        return false;
    long long i = 5;
    while (i*i <= n){
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
        i = i + 6;}
    return true;
}
int main()
{
	int p;
	cin >> p;
	while(p--)
	{
		long long n;
		scanf("%lld",&n);
		bool pp=prime(n);
        if(pp==true)
            printf("Prime\n");
        else
            printf("Not prime\n");
    }
	return 0;
}
    
    
