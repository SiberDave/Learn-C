// Create an integer array with 10 integers and then print the number of elements in the array 
// to the terminal.

// Hint: Play with the sizeof() function to determine how many bytes of storage an integer takes up.

#include <stdio.h>

int main(){
    int number[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(number)/ sizeof(number[0]);
    printf("The array has %d elements.\n", length );
    return 0;
}