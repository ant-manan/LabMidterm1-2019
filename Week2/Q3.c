#include <stdio.h>
int main()
{
    float base,height,area;
    scanf("%f", &base);
    scanf("%f", &height);
    
    area = (base*height)/2;
    
    
    printf("%.2f", area);
    return 0;
}