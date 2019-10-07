#include <stdio.h>
int main(){
    int n,i,j;
    do{
        scanf("%d",&n);
    }while(n<2 || n>9);

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j+10*i);
        }
        printf("\n");
    }
    



    return 0;
}