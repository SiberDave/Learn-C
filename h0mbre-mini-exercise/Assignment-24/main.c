// For this excercise we're going to build a C program that executes syscalls! 
// We've already learned basically everything we need to know in C up until this point to 
// accomplish this. We are going to keep it simple and we're going to use the open() 
// syscall only here. It should be noted that technically we are not making syscalls directly in user 
// programs, but instead are using wrapper functions defined in libc for our purposes.

#include <stdio.h>
#include <fcntl.h>

int main(){
    int openfile;
    
    openfile = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

    if (openfile < 0){
        printf("Open operation failed!\n");
        return -1;
    }
    else {
        printf("Open operation succeeded!\n");
        return 0;
    }
}