#include <stdio.h>

int main()
{
    int a;
    int b = -10;

    for ( a = 1; a < 21; a++ )
            printf("a is now %d\n", a);

    while (b <= 10)
    {
        printf("b is now %d\n", b);
        b += 2;
    }

    return(0);
}
