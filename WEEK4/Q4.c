#include <stdio.h>
int main(){
    int i=1,sum=0;
    char n;
    //int ch;
    while(i){
        scanf("%c",&n);

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        if(n=='q') {
            i=0;       
        }
        else {
            n=n-'0';
            sum=sum+n;
        } 
    }

    printf("%d",sum);
    return 0;
}