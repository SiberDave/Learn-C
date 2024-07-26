#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void){
    int filedescriptor = open("testmalicious.txt", O_WRONLY | O_CREAT, S_IRWXU);
    int writebyte;
    char word[] = "Hello World!\n";

    if (filedescriptor < 0){
        printf("Open operation failed!\n");
        return -1;
    }
    else {
        printf("Open operation succeeded!\n");

        writebyte = write(filedescriptor,word,sizeof(word));

        if (writebyte = sizeof(word)){
            puts("The write operation succeeded!");
        }
        else {
            puts("The write operation failed!");
            return -1;
        }

        return 0;
    }
}