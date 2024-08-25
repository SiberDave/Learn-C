/* Computes dimensional weight of 12" x 10" x 8" box */

#include <stdio.h>

int main(void){
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * width * length;
    weight = (volume + 165) / 166;

    printf("Dimensions: %d x %d x %d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional Weight (pounds): %d\n", weight);
}