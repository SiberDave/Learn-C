#include <stdio.h>

int main(void){
    // use while

    int i = 10;

    while (i < 10) {
        printf("While: i is %d\n", i);
        i++;
    }

    // use do-while

    i = 10;

    do {
        printf("do-while: i is %d\n", i);
        i++;
    }while(i<10);

    printf("All done!\n");
}