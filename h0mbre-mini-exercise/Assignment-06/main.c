// Prompt the user for a Numerator (top number of a fraction) and a Denominator (bottom number of a fraction). 
// Tell the user whether or not there is a remainder using if control flow.

#include <stdio.h>

int main() {
    int numerator; int denominator;
    printf("Enter a numerator: ");
    scanf("%d",&numerator);
    printf("Enter a denominator: ");
    scanf("%d",&denominator);
    if (numerator % denominator == 0){
        printf("There is NOT a remainder!#\n");
    }
    else{
        printf("There is a remainder!#\n");
    }
    return 0;
}