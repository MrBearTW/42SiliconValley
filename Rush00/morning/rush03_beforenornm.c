#include <unistd.h>
#include <stdio.h>
// Type 0 Top
// Type 1 Middle
// Type 2 Bottom

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void printUpperOrLowerLine(int width, int type)
{
    int i;

    i = 1;
    while (i <= width)
    {

        if (i == 1 || i == width)
        {
            if (type == 1)
                ft_putchar('B');
            else
            {
                if (i == 1)
                    ft_putchar('A');
                else
                    ft_putchar('C');
            }
        }
        else
        {
            if (type == 1)
                ft_putchar(' ');
            else
                ft_putchar('B');
        }
        i++;
    }
}

void rush(int width, int height)
{
    int i = 1;

    while (i <= height)
    {

        if (i == 1 || i == height)
            printUpperOrLowerLine(width, 0);
        else
            printUpperOrLowerLine(width, 1);
        i++;
        ft_putchar('\n');
    }
}

int main()
{
    printf("5, 3 \n");
    rush(5, 3);
    printf("5, 1 \n");
    rush(5, 1);
    printf("1, 1 \n");
    rush(1, 1);
    printf("1, 5 \n");
    rush(1, 5);
    printf("4, 4 \n");
    rush(4, 4);
    return (0);
}