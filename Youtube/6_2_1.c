#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int counter[6] = {0, 0, 0, 0, 0, 0};
    //counter[0] = counter[1] = counter[2] = counter[3] = counter[4] = counter[5] = 0 int i;
    int i, j;
    for (i = 1; i <= 6000; ++i)
    {
        int dice = rand() % 6 + 1;
        counter[dice - 1]++;
    }
    for (j = 1; j <= 6; ++j)
    {
        printf("%d:%d\n", j, counter[j - 1]);
    }
    return (0);
}