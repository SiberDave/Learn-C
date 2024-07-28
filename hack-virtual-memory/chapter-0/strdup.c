#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *s;

    s = strdup("Holberton");
    // see man strdup
    // return pointer of the new string which is duplicate of holberton string 

    if (s == NULL){
        fprintf(stderr, "%s", "Can't allocate mem with malloc\n");
        // see man fprintf
        // stream on first argument can be file descriptor or stdout or stderr stream.
        // stderr used to print it as error message.
        return (EXIT_FAILURE);
    }
    printf("%p\n", (void *)s);
    return (EXIT_SUCCESS);
}