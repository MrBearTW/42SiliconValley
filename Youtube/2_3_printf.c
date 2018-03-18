#include<stdio.h>

int main()
{
    int a = 123456789;
    unsigned int b = 3000000000;

    //printf("%d\n", a); //123456789 (o)
    //printf("%d\n", b); //-1294967296 (x)

    //printf("%u\n", b); //3000000000 (o)
    //printf("%u\n", a); //123456789 (?)

    float c = 123.45;
    double d = 123.45;

    printf("%f\n", c); //123.449997 (o)
    printf("%f\n", d); //123.450000 (o)

    //printf("%d\n", c); //cant compile
    //printf("%d\n", d); //cant compile

    return (0);
}