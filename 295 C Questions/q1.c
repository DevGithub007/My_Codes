#include <stdio.h> 
 
  int main() 
  { 
  	int c=0,i,a[200];
  	
	for(i=0;i<=100;i++)
	{
		
		scanf("%d\n",&a[i]);
	
		if(a[i]==42)
			
		    break;
		else 
			c++;	
		
	}
	for(i=0;i<c;i++)
	{
		printf("%d",a[i]);
	}
	 
  }
