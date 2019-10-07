#include <stdio.h>
int main(){
    int n,i=1,v1=1,v2=1,v=0;
    scanf("%d",&n);
    
    if(n>2){
        do{
            
            printf("%d ",v);1
            v1=v2;
            v2=v;
            v=v1+v2;
            i++;

        }while(i<=n);
    }
    
    

    return 0;
}