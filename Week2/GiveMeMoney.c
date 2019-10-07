#include <stdio.h>
int main()
{
// Receive an input money
printf("Give me your money:");
int money;
scanf("%d",&money);
// Change money to coins: 10, 5, 1
int ten = money/10;
int remainMoney = money%10;
int five = remainMoney/5;
remainMoney = remainMoney%5;
//Display change amounts of each type of coins
printf("Here is your changes.\n");
printf("Ten:%d, Five:%d, One:%d\n",ten,five,remainMoney);
return 0;
}