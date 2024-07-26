#define _GNU_SOURCE
#include <dlfcn.h>
#include <unistd.h>
#include <string.h>

ssize_t write(int fd, const void *buf, size_t n){
    ssize_t (*new_write)(int fd, const void *buf, size_t n);
    int result;
    char string[] = "Goodbye, cruel world!\n";
    new_write = dlsym(RTLD_NEXT, "write");

    if(strcmp(buf, "Hello World!\n") == 0)
    {
        result = new_write(fd,string, sizeof(string));
    }
    else{
        result = new_write(fd, buf, n);
    }

    return result;
}