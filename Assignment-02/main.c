// Initialize and assign a value to an integer, float, and char variable. 
// Then print each one with a sentence on a new line describing variable data type.

#include <stdio.h>

int main() {
    char a = 'a';
    char helloworld[] = "Hello World";
    int b = 10;
    float c = 25.5;

    // specifier character is for specify variable type and placeholder for variable
    printf("%c is char\n", a); // %c = char
    printf("%s is string on char\n", helloworld); // %s = string
    printf("%d is integer\n", b); // %i or %d = integer
    printf("%f is float\n", c); // %f = float
    return 0;
}