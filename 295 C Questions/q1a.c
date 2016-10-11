#include <stdio.h> 
 
  int main() 
  { 
  	int c=0,i,a[9]={1,2,3,4,5,68,35,42,15};
  	
	for(i=0;i<=9;i++)
	{
		
		//scanf("%d\n",a[i]);
		printf("%d\n",a[i]);
		if(a[i]==42)
			{
				c++;
			break;
		}
			/*printf("\n%d",a[i]);
		else
			break;*/
		
		
	}
	for(i=0;i<c&&a[i]!=42;i++)
		printf("%d",a[i]);
	 
  }
