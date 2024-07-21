# include <stdio.h>

struct test {
    int integer;
};

int main(void){
    struct test test1;
    struct test *testptr = &test1;

    test1.integer = 10;
    printf("value of using dot with struct is %i\n",test1.integer);
    (*testptr).integer = 15;
    printf("value of using dot with struct pointer is %i\n",test1.integer);
    testptr->integer = 20;
    printf("value of using -> with struct pointer is %i\n",test1.integer);
    // 2nd and 3rd way are same since 2nd one is dereferencing first and 3rd one is 
    // assign via memory pointer.
    return 0;
}