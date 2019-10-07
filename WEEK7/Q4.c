#include <stdio.h>
#include <math.h>
int main(){
    int i,n,dec=0;
    scanf("%d",&n);

    int num[n];

    for(i=0;i<n;i++){
        do{
            scanf("%d",&num[i]);
        }while(num[i]<0||num[i]>1);
        
    }

    for(i=n-1;i>=0;i--){
        printf("%d ",num[i]);
    }

    for(i=0;i<n;i++){
        dec+=(num[i]*pow(2,i));
    }

    printf("\n%d",dec);
}