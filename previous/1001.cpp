#include<stdio.h>


float power(float ,int );

int main()
{
int n;
float R;

while(scanf("%f %d",&R,&n)==2)
{
printf("%f\n",power(R,n));
}

return 0;
}

float power(float R,int n)
{
int i;
float j=1.0;

for(i=0;i<n;i++)
{
j=j*R;
}
return(j);
}
