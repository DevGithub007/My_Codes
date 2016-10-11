#include <bits/stdc++.h>


using namespace std;

typedef  long long i64;
typedef unsigned long long ui64;

#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define pks printf("Case %d: ",++ks);

#define mx 2000000


i64 call(i64 n)
{
    i64 ans=1;
    while(n)
    {
        i64 b=n&1;
        n=n>>1;
        if(!b) ans=ans*2;
    }
    return ans;
}
int main()
{

    //READ("in");
    i64 n;
    cin>>n;
    assert(0<=n and n<=1000000000000000ll);
    cout<<call(n)<<endl;
    return 0;
}