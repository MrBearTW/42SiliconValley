#include <stdio.h>
int main()
{
    //si1 < si2 <si3
    int si1, si2, si3;
    printf("enter length:");
    scanf("%d%d%d", &si1, &si2, &si3);
    if (si3 == si1)
    {
        printf("isosceles triangle\n");
    }
    if (si1 == si2 || si2 == si3)
    {
        printf("Regular triangle\n");
    }
    if (si1 * si1 + si2 * si2 == si3 * si3)
    {
        printf("Rectangular triangle\n");
    }

    return (0);
}