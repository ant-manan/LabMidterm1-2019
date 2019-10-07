#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    if(n%2==0&&n<1250&&n>420&&n%10!=6){
        printf("1");
    }
    else printf("0");
    
}