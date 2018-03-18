#include <stdio.h>
int main()
{
    int N;
    printf("N= ");
    scanf("%d", &N);

    //    int isPrime = 0;
    int number;
    for (number = 2; number < N && N % number != 0; ++number)
        ;

    if (number == N)
    {
        printf("Yes\n");
    }
    else
    {
        printf("NO\n");
    }

    return (0);
}