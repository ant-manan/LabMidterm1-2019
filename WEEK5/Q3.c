#include <stdio.h>
int main(){
    int n1,n2,GCD=1,i;
    scanf("%d %d",&n1,&n2);

    if(n1>=n2){
        for(i=n1;i>0;i--){
            if (n1%i==0 && n2%i==0) {GCD*=i;
            break;
            }
        }
    }

    else{
        for(i=n2;i>0;i--){
            if (n1%i==0 && n2%i==0) {GCD*=i;
                break;
            }
        }
    }

    printf("%d",GCD);
    return 0;
}