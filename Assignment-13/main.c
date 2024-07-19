// Create a program that prompts the user to input scoring totals for 5 players during 4 basketball games. 
// The program will track which player had the highest scoring average over the 4 games and print the result to the terminal.

// Hint: Use a two-dimensional array and nested for loops. The outer-most for loop will iterate 
// on a per game basis gathering scores for the inner-most for loop interating through players. 
// Use this same model to create arrays to store total scores and to calculate averages.

// Extra Credit: There is none. This one is pretty hard!

#include <stdio.h>

int main(void){
    int scoreboard[4][5] = {};
    float score_means[5] = {};
    float placeholder = 0;
    int player;

    for (int i = 0; i < 4; i++){
        printf("Game #%i\n", i+1);
        for (int j = 0; j < 5; j++){
            printf("Enter scoring total for Player #%i: ",j+1);
            scanf("%i", &scoreboard[i][j]);
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            score_means[i] += scoreboard[j][i];
        }
        score_means[i] = score_means[i] / 4;
    }

    for (int i = 0; i < 5; i++){
        if (score_means[i] > placeholder){
            placeholder = score_means[i];
            player = i+1;
        }
    }

    printf("Player #%i had the highest scoring average at %.2f points per game.\n",player,placeholder);

    return 0;
}