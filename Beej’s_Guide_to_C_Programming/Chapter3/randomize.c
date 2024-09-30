#include <stdio.h>
#include <stdlib.h> // for rand function

int main(void)
{
    int r;

    do {
        r = rand() % 100; // get random number between 0 to 99
        printf("%d\n",r);
    }while (r != 37); // repeat until 37 comes up

    return EXIT_SUCCESS;
}