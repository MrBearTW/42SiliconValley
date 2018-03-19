#include <stdio.h>
void countTo1(int);

int main()
{
    countTo1(1);
    return (0);
}

void countTo1(int i)
{
    if (i <= 3)
    {
        countTo1(i + 1);
        printf("%d\n", i);
//        countTo1(i + 1);
    }
}
