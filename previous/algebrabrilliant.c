#include<stdio.h>
int main()
{
int x,i,j,k=0;
for(i=-504;i<=504;i++)
{
j=(i-2)*(i-3)*(i-5)*(i-6);
if(j==504)
{k++;
printf("i = %d\n",i);
}
}
printf("no. of roots is : %d",k);
}
