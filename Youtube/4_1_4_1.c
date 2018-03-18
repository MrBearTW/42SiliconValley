#include <stdio.h>
int main()
{
    int a, max;
    printf("1 nu:");
    scanf("%d", &a);
    max = a;
    printf("2 nu:");
    scanf("%d", &a);
    if (max < a)
    {
        max = a;
    }
    printf("max is %d.\n", max);

    return (0);
}