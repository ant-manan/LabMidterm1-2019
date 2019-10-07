#include <stdio.h>
int main()
{
    int n,i,j,k;
    do{
        scanf("%d",&n);
    }while(n<=1 || n>=30 || n%2==0);
   

   for(i=1;i<=n/2+1;i++){
        for(j=1;j<=i-1;j++){
           printf("-");
        }
        printf("%d",i%10);

        for(j=n/2;j>=i;j--){
           printf("-");
        }

        for(j=1;j<=n/2-i;j++){
           printf("-");
        }
        if(i!=n/2+1) printf("%d",i%10);

        for(j=1;j<=i-1;j++){
           printf("-");
        }
        printf("\n");
   }

   for(i=1;i<=n/2;i++){
        for(j=1;j<=n/2-i;j++){
           printf("-");
        }
        if(i!=n/2+1) printf("%d",(i+n/2+1)%10);
        
        for(j=0;j<=i-1;j++){
           printf("-");
        }
 
        for(j=1;j<=i-1;j++){
           printf("-");
        }
        printf("%d",(i+n/2+1)%10);

        for(j=n/2;j>=i+1;j--){
           printf("-");
        }
        printf("\n");
   }
}