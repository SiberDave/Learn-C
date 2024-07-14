// Prompt the user to input the length of a radius and then print the area of the 
// user's circle to the terminal.
// Extra credit: Use the #define feature of C to assign the value 3.14 to PIE.

#include <stdio.h>
// library for math function (pow)
#include <math.h>
// define value of PI is 3.14 and its global.
#define PI 3.14

int main() {
    float rad;
    printf("Enter the radius of your circle: ");
    scanf("%f", &rad);
    float area = PI * pow(rad,2); // pi x rad^2
    // pow is square function from math.h
    printf("The area of your circle is %f\n",area);
    return 0;
}