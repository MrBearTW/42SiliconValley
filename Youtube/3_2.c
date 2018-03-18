#include <stdio.h>

int main()
{
    int a, c;
    double b, d;
    a = b = c = d = 3 + 7 / 2.;

    printf("a=%d\n", a); //6.500000
    printf("b=%f\n", b); //6
    printf("c=%d\n", c); //6.000000
    printf("d=%f\n", d); //6

    return (0);
}