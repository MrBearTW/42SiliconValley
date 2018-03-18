#include <stdio.h>
int main()
{
    int a, b,  min;
    printf("enter 2 nu:");
    scanf("%d%d", &a, &b);
    min = a;
    if (b < min)
    {
        min = b;
    }

    printf("min %d\n", min);
    return (0);
}