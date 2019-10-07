#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    float num[n],min,max;

    for(i=0;i<n;i++){
        scanf("%f",&num[i]);
    }

    min = num[0],max=num[0];
    for(i=0;i<n;i++){
        if(min>num[i]){
            min=num[i];
        }
        if(max<num[i]){
            max=num[i];
        }
    }

    float sum=min+max;
    printf("%.2f",sum);
    return 0;
}