#include <stdio.h>
#define FRACTION (4.0f / 3.0f)
#define PI_NUMBER (22.0f / 7.0f)

int main(void){
    int radius;
    printf("Enter the value of radius: ");
    scanf("%d", &radius);
    float volume = FRACTION * PI_NUMBER * radius * radius * radius;
    printf("Volume of sphere with %d-meter radius is %.2f m^3\n", radius, volume);
}