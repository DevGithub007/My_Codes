#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100005]={0},c;
	long long i,j,k,count[26]={0},sum=0;
	scanf("%s",s);
	for(i=0;s[i];i++)
	{
		++count[s[i]-'a'];
	}
	for(i=0;i<26;i++)
	{
		if(count[i]%2!=0)
		++sum;
	}
	if(sum<=1)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}
