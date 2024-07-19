#include <stdio.h>

void hello(void)
{
	char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
    char array2[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, '\0'};
    // \0 used since there is no way for undefined char array know where is end of string.

	//printf("%s", array);
    puts(array);
    puts(array2);
    // puts are used like print but without format type and add new line at the end.
}

int main(void) 
{
	hello();
}