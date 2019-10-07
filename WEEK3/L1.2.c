#include <stdio.h>
int main()
{
    int id1,id2,id3,id4;
    float p1,p2,p3,p4;
    scanf("%d %f\n%d %f\n%d %f\n%d %f",&id1,&p1,&id2,&p2,&id3,&p3,&id4,&p4);
    
    
    printf("%-5d %-10.2f\n%-5d %-10.2f\n%-5d %-10.2f\n%-5d %-10.2f\n",id1,p1,id2,p2,id3,p3,id4,p4);
}