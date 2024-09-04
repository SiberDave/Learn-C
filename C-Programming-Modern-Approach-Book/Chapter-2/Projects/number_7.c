#include <stdio.h>

int main(void){
    int value, dollar_20, dollar_10, dollar_5;
    printf("Enter a dollar amount: ");
    scanf("%d",&value);
    dollar_20 = value / 20;
    value = value - (dollar_20 * 20);
    printf("$20 bills: %d\n", dollar_20);
    dollar_10 = value / 10;
    value = value - (dollar_10 * 10);
    printf("$10 bills: %d\n", dollar_10);
    dollar_5 = value / 5;
    value = value - (dollar_5 * 5);
    printf("$5 bills: %d\n", dollar_5);
    printf("$1 bills: %d\n", value);
}