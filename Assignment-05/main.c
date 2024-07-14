// Prompt the user for a number of seconds. Take the user's input 
// and convert the number of seconds into its duration in Hours, 
// Minutes, and remaining Seconds.

// Extra Credit: Make sure the Hours, Minutes, and Seconds print with no decimal places.

#include <stdio.h>

int main() {
    int seconds;
    printf("Enter the amount of seconds: ");
    scanf("%d", &seconds);
    int hour = seconds / 3600;
    int minute = (seconds % 3600) / 60;
    int second = seconds - hour * 3600 - minute * 60;
    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.#\n",seconds,hour,minute,second);
    return 0;
}