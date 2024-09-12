#include <stdio.h>

int main(void){
    float loan, rate, rpm, payment, temp_loan;
    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&payment);

    rpm = (rate / 100) / 12;
    temp_loan = (loan + (rpm * loan)) - payment;
    printf("Balance remaining after first payment: $%.2f\n",temp_loan);

    temp_loan = (temp_loan + (rpm * temp_loan)) - payment;
    printf("Balance remaining after second payment: $%.2f\n",temp_loan);

    temp_loan = (temp_loan + (rpm * temp_loan)) - payment;
    printf("Balance remaining after third payment: $%.2f\n",temp_loan);
}