#include <stdio.h>
int main()
{
    int hr=0,min=0,sec;
    scanf("%d", &sec);
    
    
    min=sec/60;
    hr=min/60;
    min=min%60;
    sec=sec%60;
    
    printf("%d:%d:%d", hr,min,sec);
    return 0;
}