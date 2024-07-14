#include <stdio.h>

int main() {
    char* first; 
    // Create the pointer char variable.
    char* last;
    printf("Enter your first name : ");
    scanf("%ms", &first); 
    // additional m on %s is used to parse word and allocate enough memory dynamicly 
    // to store the input and it will store the adress of input to pointer 
    printf("Enter your last name : ");
    scanf("%ms", &last);
    printf("Hello, %s %s!\n", first, last);
    return 0;
}