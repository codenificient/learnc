
#include <stdio.h>

int main()
{
    int x;

    x = 1;
    while( x <= 10 )
    {
        printf(" x is now %d\n", x);
        x++;
    }

    int y = 10;
    while ( y > 0 )
    {
        printf(" y is now %d\n", y);
        y--;
    }

    int z = 2;
    while ( z <= 20 )
    {
        printf(" z is now %d\n", z);
        z += 2;
    }
    return(0);
}
