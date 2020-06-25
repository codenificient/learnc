#include <stdio.h>

/*
constants represent values, characters or strings that do not change as the program runs
#define is a preprocessor and does not need semicolon
immediate values, constant data types and constant expressions
const is the keyword
scope is limited only within functions in which they're defined

*/

int main()
{
    const int x = 5;

    printf("%d squared is %d\n",x,x*x);
    // x = 10;
    printf("%d squared is %d\n",x,x*x);


    return(0);
}
