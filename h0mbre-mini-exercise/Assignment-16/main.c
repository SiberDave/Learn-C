// Initialize an int array of 10 elements and then print the value of the array 
// with printf("%d", array).

// Extra Credit: Use Google to find out why we get a memory address (a pointer!) as our output.

#include <stdio.h>

int main(void){
    char arrays[] = {0,1,2,3,4,5,6,7,8,9};
    int *ptr = &arrays;
    printf("value of pointer is: %p\n",ptr);
    printf("value of arrays[0] is: %p\n",&arrays[0]);
}