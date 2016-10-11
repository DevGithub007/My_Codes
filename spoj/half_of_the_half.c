#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j,k,l;
	scanf("%d",&t);
	while(t--)
	{
		char s[201]={0};
		scanf("%s",s);
		l=strlen(s)/2;
		for(i=0;i<l;i+=2)
		printf("%c",s[i]);
		printf("\n");
	}
	return 0;
}
