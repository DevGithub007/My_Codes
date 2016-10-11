#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1205]={0},chh;
	scanf("%s",s);
    int len=strlen(s);
    int pp=pow(2,len);
    pp-=2;
       printf("%d\n",pp);
    return 0;
}
