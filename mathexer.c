// math exercise in C
#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;
    float p;
    float m;
    float r;

    printf("Input a number a for math: ");
    scanf("%f", &a);
    printf("Input a number b for math: ");
    scanf("%f", &b);
    p = pow(a, b);
    m = (a*b);
    r = sqrt(m);
    printf("For addition, %f + %f  equals %f\n", a, b, a+b);
    printf("For subtraction,  %f - %f , equals %f\n", a, b, a-b);
    printf("When multiplying,  %f x %f , we get %f\n", a, b, m);
    printf("Division: %f / %f , the quotient is %f\n", a, b, a/b);
    printf(" %f raised to the power of %f is %f\n", a, b, p);
    printf("The square root of %f is %f\n", m, r);
    return(0);
}
