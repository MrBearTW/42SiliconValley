#include <stdio.h>
int main()
{
    int price[] = {90, 75, 83, 89, 71};
    int total = 0, id;
    while (1)
    {
        scanf("%d", &id);
        if (id == 0)
        {
            break;
        }
        total += price[id - 1];
    }
    printf("Total: %d\n", total);
    return (0);
}