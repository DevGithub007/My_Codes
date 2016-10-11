#include<stdio.h>
main()
{
int num,i=2;

//printf("\nEnter a number:");
scanf("%d",&num);
while(i<=num)
{
if(num%i==0)
{
num = num/i;
printf("%d is a prime\n", i );
i=1;
}
i++;
}
//system("pause");
//return 0;
}
