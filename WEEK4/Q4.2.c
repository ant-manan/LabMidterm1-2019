#include <stdio.h>
int main(){
    int i=1,c=0;
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
            n=n-48;
            if(n%2==0) c++;
        } 
    }
    printf("%d",c);
    return 0;
}
