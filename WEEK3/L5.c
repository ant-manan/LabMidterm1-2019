#include <stdio.h>
int main()
{
    char c,c2;
    scanf("%c",&c);

    c2=(c>=65&&c<=90)? c+32:c;
    printf("%c",c2);
}