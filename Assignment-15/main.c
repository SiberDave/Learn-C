#include <stdio.h>

int main(void) {
    int var = 10;
    int *ptr = &var;

    printf("The value of int variable is: %d\n", var);
    printf("The value of the pointer to the int variable is: %p\n", ptr);
    printf("The memory address of the int variable is: %p\n", &var);
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", *ptr);
    
    return 0;
}