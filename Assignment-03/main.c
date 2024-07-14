// Prompt the user to input their first and last name and then print them a welcome message. 
// Try storing the input as a char variable's value.

// Easy Mode: Allocate an arbitrary amount of indices to your char array and 
// pray to the gods that the user input fits.

// Extra Credit: Dynamically allocate the array size of your char variable based on the 
// length of the user's input.

#include <stdio.h>

int main() {
    char first[10];
    char last[10];
    printf("Enter your first name : ");
    scanf("%s", first); // scanf used for asking user input and put it on variable.
    printf("Enter your last name : ");
    scanf("%s", last);
    printf("Hello, %s %s!\n", first, last);
    return 0;
}