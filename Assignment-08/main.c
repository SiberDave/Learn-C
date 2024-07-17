// Ask the user for a number between 1 and 500 and then display what range that number is in from the following:
// 1 - 100
// 101 - 200
// 201 - 300
// 301 - 400
// 401 - 500

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number between 1 and 500: ");
    scanf("%d", &number);

    if (number >= 1 && number <= 500){
        if (number >= 1 && number <= 100){
            printf("Your number is between 1 and 100!\n");
        }
        else if (number >= 101 && number <= 200){
            printf("Your number is between 101 and 200!\n");
        }
        else if (number >= 201 && number <= 300){
            printf("Your number is between 201 and 300!\n");
        }
        else if (number >= 301 && number <= 400){
            printf("Your number is between 301 and 400!\n");
        }
        else if (number >= 401 && number <= 500){
            printf("Your number is between 401 and 500!\n");
        }
    }
    else{
        printf("Your number was not in any of our ranges.\n");
    }
    return 0;
}