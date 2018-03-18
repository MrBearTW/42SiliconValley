#include <stdio.h>
int i = 5;
int f()
{
    i = i + 1;
    printf("i1=%d\n", i);   //6
    return 0;
}

int main()
{
    printf("i2=%d\n", i);   //5
    int i = 6;
    i = i + 1;
    f();
    printf("i3=%d\n", i);   //7
    return (0);
}