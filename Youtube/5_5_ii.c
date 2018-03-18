#include <stdio.h>
int main()
{
    int i = 3;
    printf("i1=%d\n", i);
    if (i == 3)
    {
        i = i + 1;
        int i = 6;
        printf("i2=%d\n", i);
        i = i + 1;
    }
    if (i == 3) // 4  do not print i3
    {
        printf("i3=%d\n", i);
    }
    return (0);
}