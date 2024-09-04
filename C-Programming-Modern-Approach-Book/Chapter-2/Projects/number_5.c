#include <stdio.h>

int main(void){
    int x, polynomial;
    printf("Enter an amount of x: ");
    scanf("%d",&x);
    polynomial = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    printf("Value of polynomial is %d\n", polynomial);
}