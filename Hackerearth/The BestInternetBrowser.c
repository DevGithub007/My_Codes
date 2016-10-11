#include<stdio.h>
#include<string.h>
main()
{
int t,l,i,count;
char str[201];
scanf("%d",&t);
while(t--)
{
scanf("%s",str);
l=strlen(str);
count=4;
for(i=4;i<l-4;i++)
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
continue;
else
count++;
}
printf("%d/%d\n",count,l);
}
}
