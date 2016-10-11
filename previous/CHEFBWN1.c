#include <stdio.h>
    int main(void) {
    // your code goes here
    int t,n,m,i,z,y;
    scanf("%d",&t);
    while(t--){
    scanf("%d%d",&n,&m);
    int c[n+1],d[n+1];
    for(i=1;i<=n;i++){
    scanf("%d",&c[i]);
    d[i]=0;
    }
    for(i=0;i<m;i++){
    scanf("%d%d",&z,&y);
    if(y==n){
    d[z]+=1;
    }
    else {
    d[z]+=1;
    d[y+1]-=1;
    }
    }
    for(i=2;i<=n;i++){
    d[i]=d[i-1]+d[i];
    }
    for(i=1;i<=n;i++){
    printf("%d ",c[i]+d[i]);
    }
    printf("\n");
    }
    return 0;
} 
