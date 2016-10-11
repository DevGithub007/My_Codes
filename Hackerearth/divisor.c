#include <stdio.h>
#include <math.h>

int main()
{
    int N,X,i,j,count, num;
    
    scanf("%d",&N);
    
    for (i=0; i<N; i++) {
    	scanf("%d",&X);
    	count=0;
    	if (X<6)
    	    printf("NO\n");
    	else if (X%2==0) printf("YES\n");
    	else {
    		num=ceil(sqrt(X));
    	for (j=1; j<num; j++) {
    		if (X%j==0) count++;
    		if (count>=2) break;
    	}
    	if (count<2) printf("NO\n");
    	else printf("YES\n");
    	}
    }
    return 0;
}

