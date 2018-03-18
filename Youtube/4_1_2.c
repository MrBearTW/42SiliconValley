#include <stdio.h>
int main()
{
    int customer, total;
    printf("customer number?");
    scanf("%d", &customer);
    total = customer * 300;
    if (total >= 3000)
    {
        total = total * 0.8;
        //printf("Total: %d\n", total);
    }

    printf("Total: %d\n", total);

    return (0);
}