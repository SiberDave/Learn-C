// Create/define a structure (struct) outside of main() that includes an int, char, and float member. 
// Inside of main(), declare values for those struct members and then print their values to 
// the terminal.

#include <stdio.h>

struct test {
    int testint;
    char testchar;
    float testfloat;
};

int main(void){
    struct test test1;
    test1.testint = 50;
    test1.testchar = 'W';
    test1.testfloat = 3.14;
    printf("This is the int: %d, this is the char: %c, this is the float: %.2f\n",test1.testint,test1.testchar,test1.testfloat);
    return 0;
}