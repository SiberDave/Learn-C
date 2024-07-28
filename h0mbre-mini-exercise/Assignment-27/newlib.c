#define _GNU_SOURCE
#include <dlfcn.h>
#include <unistd.h>
#include <string.h>
// puts function structure are same as the original one which is puts command.
int puts(const char *message){
    // declaring pointer of variable new_puts which have same argument as puts.
    int (*new_puts)(const char *message);
    int result;
    new_puts = dlsym(RTLD_NEXT, "puts");
    // see man dlsym 
    // dlsym are going to search address of the symbol name / function (in this case is puts)
    // handle here are dynamically loaded shared object from shared library.
    // handle used here is RTLD_NEXT which is going to find next occurence of puts in search order after current puts.
    if(strcmp(message, "Hello World!") == 0)
    {
        result = new_puts("Goodbye, cruel world!");
    }
    else{
        result = new_puts(message);
    }
    // if message of puts is hello world, it will call the new_puts which is real puts and print goodbye cruel world.
    // if not, it will be print message
    // this library will run as puts first.
    return result;
}