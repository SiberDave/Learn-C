// Prompt the user for a number of coin flips (x) and then simulate (x) number of coin flips and 
// print the results to the terminal.

// Hint: Look up the srand() function.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int x;
    int top = 2; int bottom = 1;
    int head = 0; int tail = 0;
    srand(time(NULL));
    // for randomizing the randomizer function with seed which is time.
    printf("How many times would you like to flip the coin? ");
    scanf("%i", &x);

    for(int i = 0; i < x; i++){
        // int coin_result = rand() % (top + 1 - bottom) + bottom;
        // rand % 3 means it will show 3 number, which start from 0. It will be 0, 1, 2
        rand() % 2 ? head++ : tail++;
        // ternary conditional operator
        // it will randomize between 0 and 1. 1 = heads, 0 = tails.
    }

    printf("After flipping the coin %i times, the results were\n" 
    "%i heads\n" 
    "%i tails\n",
    x,head,tail);
    return 0;
}