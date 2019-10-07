#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    float sum=0;
    float num[n];

    for(i=0;i<n;i++){
        scanf("%f",&num[i]);
        sum+=num[i];
    }

    float ave=sum/n;

    printf("%.2f",ave);
    return 0;
}