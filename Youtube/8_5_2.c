#include <stdio.h>
void swap(int *, int *);
void sort(int *, int *);
int main()
{
    int a = 4, b = 2;
    swap(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}
void sort(int *a, int *b)
{
    if (*a > *b)
    {
        swap(&*a, &*b);
    }
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}