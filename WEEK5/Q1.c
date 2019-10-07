#include <stdio.h>
int main(){
    int n,a=1,m=1,i;
    scanf("%d",&n);
    

    /* 
    for(m=1;m<=n;m){
        a=a*m;
        m++;
        if(m==n){
            printf("%d",a);
        }
    }
    */

    
    while(m<=n){
        a=a*m;
        m++;
        if(m==n) printf("%d",a);
    }
    

    /* 
    do{
        a=a*m;
        m++;
        if(m==n) printf("%d",a);
        //m++;
    } while(m<=n);
    */





    /*
    for(m=1;m<=n;m++){
        a=a*m;
        if(m==n){
            printf("%d",a);
        }
    }
    */

}