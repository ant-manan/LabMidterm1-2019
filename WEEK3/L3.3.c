#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n>0&&n%3!=0 && n%5!=0) {
            printf("1");
    } 
    else printf("0");
}