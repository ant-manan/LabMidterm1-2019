#include <stdio.h>
int main(){
    int n,i,j;
    do{
        scanf("%d",&n);
    }while(n<2 || n>9);

    for(i=n;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%d%d ",i,j);
        }
        printf("\n");
    }

    return 0;
}