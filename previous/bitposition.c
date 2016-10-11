#include<stdio.h>
int main()
{
    int num=12;
    int mask=1;
    int pos;
    if(num==0)
    {
        printf("0");
        return 0;
    }
    for(pos=1;!(mask & num);pos++)
    {
        mask=mask<<1;
    }
    printf("position : %d ",pos);
    return 0;
}
