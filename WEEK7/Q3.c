#include <stdio.h>
int main(){
    int i,n,c=0;
    scanf("%d",&n);

    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int a,b;
    scanf("%d %d",&a,&b);



    for(i=0;i<n;i++){
        if(num[i]==a){
            num[i]=b;
            c++;
        }
    }

    if(c==0){
        printf("not found");
    }
    else{
        for(i=0;i<n;i++){
            printf("%d ",num[i]);
        }
    }

    return 0;
}