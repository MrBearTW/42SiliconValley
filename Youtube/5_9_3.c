#include <stdio.h>
int S(int);

    int main()
{
    int N;
    printf("N= ");
    scanf("%d", &N);
    printf("%d\n", S(N));
    return (0);
}

int S(int N)
{
    if (N <= 2)
    {
        return N;
    }
    return S(N - 1) + S(N - 2);
}

//45    1836311903
//46    -1323752223
//biger than 45 will overflow