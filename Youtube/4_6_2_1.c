#include <stdio.h>
int main()
{
    int max,min;
    printf("MAX=");
    scanf("%d", &max);
    printf("MIN=");
    scanf("%d", &min);

    int num;
    for (num = min; num <= max; ++num)
    {
        if (num % 3 == 2 && num % 5 == 3 && num % 7 == 2)
        {
            printf("%d\n", num);
        }
    }
    printf("\n");
    return (0);
}