#include <stdio.h>
#include <math.h>
int main(){
    int n,m,i,sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<=m;i++){
        sum+=n*pow(2,i);
    }
    printf("%d",sum);
    return 0;
}