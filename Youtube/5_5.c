#include <stdio.h>
int i = 1;

int main()
{
    printf("i1=%d\n", i);   //1
    int i = 2;
    printf("i2=%d\n", i);   //2
    {
        printf("i3=%d\n", i);   //2
        int i = 3;
        printf("i4=%d\n", i);   //3
    }
    printf("i5=%d\n", i);   //2
    return (0);
}