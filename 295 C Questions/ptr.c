#include<stdio.h>
int fun(int p,int n);
main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10},n,ptr;
	n=5;
	printf("arr[2]=%d, &arr=%d, *arr=%d\n",arr[2],&arr,*arr+2);
	ptr=fun(arr[2],n);
	printf("arr[2]=%d, ptr=%d",arr[2],ptr);
}
int fun (int p,int n)
{
	p=p+2;
	printf("\np=%d\n",p);
	return p;
}
