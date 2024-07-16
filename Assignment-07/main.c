// Prompt the user for A, B, and C values and then use those values to determine the value of 'X' using the Quadratic Formula.

// If you need to brush up on the Quadratic Formula, hit up Khan Academy!

// Hint: Make your life easier by including the math.h header file. You may have to search online for an 
// additional flag for gcc to get your code compiled correctly!

// Extra Credit: Build in a mechanism which checks the solution by plugging it back into the formula 
// and seeing if it equals 0. Use if control flow to instruct the user to double check all solutions 
// which aren't confirmed (a lot won't be confirmed since they'll be truncated decimals).

#include <stdio.h>
#include <math.h>

int main() {
    int a; int b; int c;
    printf("Enter the value of variable 'A': ");
    scanf("%d", &a);
    printf("Enter the value of variable 'B': ");
    scanf("%d", &b);
    printf("Enter the value of variable 'C': ");
    scanf("%d", &c);

    // Quadratic Formula
    float solution1 = (-b + sqrt(pow(b,2) + (-4 * a * c)))/(2 * a);
    float solution2 = (-b - sqrt(pow(b,2) + (-4 * a * c)))/(2 * a);

    printf("The solution using the '+' operator is: %f", solution1);
    // check if the solution1 as x with quadratic formula will result on 0 or not.
    if ((a * pow(solution1,2)) + b * solution1 + c == 0){
        printf("\n");
    }
    else{
        printf(", but you might want to double-check that...\n");
    }

    printf("The solution using the '-' operator is: %f", solution2);

    if ((a * pow(solution2,2)) + b * solution2 + c == 0){
        printf("\n");
    }
    else{
        printf(", but you might want to double-check that...\n");
    }

    return 0;
}