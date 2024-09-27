#include <stdio.h>

int main(void) 
{
    int a = 999;

    // %zu is format specifier of size_t

    printf("%zu\n",sizeof(a));      // prints of 4
    printf("%zu\n",sizeof(2 + 7));  // prints of 4
    printf("%zu\n",sizeof(3.14));   // prints of 8

    // If you need to print out negative size_t values use %zd
}