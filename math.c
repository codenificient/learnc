
#include <stdio.h>

int main()
{
    // addition
    int a;
    int b = 5;

    printf("Input an integer for addition: ");
    scanf("%d", &a);

    printf("%d + %d = %d\n", a, b, a+b);

    // subtraction
    int c;
    int d = 7;
    printf("Input a number for subtraction: ");
    scanf("%d", &c);
    printf("%d - %d = %d\n", c, d, c-d);


    // multiplication
    int e;
    int f = 4;
    printf("Input a number for multiplication: ");
    scanf("%d", &e);
    printf("%d x %d = %d\n", e, f, e*f);

    // division
    float g;
    float h = 9.0;
    printf("Input a number for division: ");
    scanf("%f", &g);
    printf("%f / %f = %f\n", g, h, g/h);
    return(0);
}
