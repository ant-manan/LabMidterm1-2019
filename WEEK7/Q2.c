#include <stdio.h>
int main (){
    int i,n,DP=0;
    scanf("%d",&n);

    int n1[n],n2[n];

    for(i=0;i<n;i++){
        scanf("%d",&n1[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&n2[i]);
    }

    for(i=0;i<n;i++){
        DP+=n1[i]*n2[i];
    }
    
    printf("%d",DP);
    return 0;
}