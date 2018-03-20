#include <stdio.h>
void addone1(int n)
{
    n = n + 1;
}
void addone2(int *n)
{
    *n = *n + 1;
}

int main()
{
    int a = 3;
    int b = 42;
    addone1(a);
    printf("%d\n", a); // a=3 not change
    addone2(&b);
    printf("%d\n",b); // b=43 change
    return 0;
}