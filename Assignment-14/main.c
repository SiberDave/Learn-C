// Intialize and delcare an int variable with any value. 
// Assign a pointer variable to the int variable you just declared and then print the value of the pointer variable.

#include <stdio.h>

int main(void) {
    int a = 10;
    int *ptr = &a;
    printf("The value of our pointer is: %p\n",ptr);
    return 0;
}