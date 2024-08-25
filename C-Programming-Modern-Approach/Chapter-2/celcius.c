// Convert farenheit to celcius

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void) {
    float farenheit, celcius;
    printf("Enter Farenheit Temperature: ");
    scanf("%f", &farenheit);
    celcius = (farenheit - FREEZING_PT) * SCALE_FACTOR;
    printf("Celcius Equivalent: %.1f\n", celcius);
    return 0;
}