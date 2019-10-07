#include <stdio.h>
int main(){
    int n,i,j,k;
    do{
        scanf("%d",&n);
    }while(n<2 || n>9);


    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        } 
        printf("\n");
    }
    for(i=1;i<=n-1;i++){
        for(k=n-1;k>=i;k--){
            printf("%d ",n-i);
        } 
        printf("\n");
    }


    return 0;
}