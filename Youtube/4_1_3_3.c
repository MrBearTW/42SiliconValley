#include <stdio.h>
int main()
{
    int si1, si2, si3;
    printf("enter length:");
    scanf("%d%d%d", &si1, &si2, &si3);
    if ((si1 * si1 + si2 * si2 == si3 * si3) ||
        si1 * si1 == si2 * si2 + si3 * si3 ||
        si2 * si2 == si1 * si1 + si3 * si3)
    {
        printf("Rectangular triangle\n");
    }
    return (0);
}