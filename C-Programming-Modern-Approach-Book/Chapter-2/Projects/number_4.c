#include <stdio.h>
#define TAX_RATE (5.0f / 100.0f)

int main(void){
    float amount, tax;
    printf("Enter an amount: ");
    scanf("%f",&amount);
    tax = TAX_RATE * amount;
    printf("With tax added: $%.2f\n", amount + tax);
}