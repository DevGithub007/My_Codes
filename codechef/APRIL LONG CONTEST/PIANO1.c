#include<stdio.h>
#include<string.h>
void main()
{
int n;
long long t,i,j,k,l,kl,ss,ans;
char s[102],ch;
scanf("%lld",&t);
while(t--)
{
scanf("%s",s);
scanf("%d",&n);
l=strlen(s);
kl=12*n;
ss=0;
ans=0;
for(i=0;i<l;i++)
{
if(s[i]=='T')
ss+=2;
else if(s[i]=='S')
ss+=1;
}
for(i=1;i*ss<kl;i++)
{
ans+=(kl - i*ss);
}
printf("%lld\n",ans);
}
}
