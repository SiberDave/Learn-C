// Ask the user for test scores and then keep asking the user if they would like to 
// continue or end the program. Store all test score values and calculate an average score 
// that prints to the terminal when the user ends the program. You can initialize your array size 
// as 10 and let's use a max test score count of 8 for this.

// Print the average of the test scores to the second decimal place.

// Hint: Look up while and for loops. Look up the strcmp() function.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define default_capacity 3

int main(void){
    char response[] = "Y";
    double *score_list = malloc(default_capacity * sizeof(double));
    if (score_list == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    int numberScore = 0;
    int score_capacity = default_capacity;
    
    while (strcmp(response,"Y") == 0){
        if (numberScore+1 == score_capacity){
            score_capacity += 1;
            score_list = realloc(score_list, (score_capacity * sizeof(double)));
            if (score_list == NULL){
                printf("Memory allocation failed!\n");
                return 1;
            }
        }
        printf("Enter a test score: ");
        scanf("%lf", &score_list[numberScore]);
        numberScore++;
        printf("Would you like to continue? Y/N ");
        scanf("%s", &response);
    }

    double mean_score;
    int total_score = 0;
    
    for(int i = 0; i < numberScore; i++){
        total_score += score_list[i];
    }

    mean_score = total_score / numberScore;

    printf("%.2f is the average.\n", mean_score);

    free(score_list);

    return 0;
}