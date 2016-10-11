#include<stdio.h>
#include<string.h>

int main()
{
int t,l,i,j,k,f;
char s[2005];

scanf("%d",&t);
while(t--)
{
int a[26]={0};
f=0;
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
j=(int)s[i] - 97;
a[j]++;
if(a[j]>=2)
{
f=1;
break;
}
}
if(f==1)
printf("YES");
else if(f==0) 
printf("NO");
printf("\n");
}
return 0;
}
