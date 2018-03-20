#include <stdio.h>
int main()
{
    int v[6] = {9, 4, 8, 7, 4, 2};
    int *n = v;
    while (n != v + 6)
    {
        printf("%d\n", *n++);
    }
    return (0);
}