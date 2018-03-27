#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    struct data
    {
        char name[10];
        int math;
        int eng;
    } student, *ptr;
    ptr = &student;
    printf("name: ");
    gets(ptr->name);
    printf("math: ");
    scanf("%d",&ptr->math);
    printf("english: ");
    scanf("%d",&ptr->eng);
    printf("math=%d,", ptr->math);
    printf("english=%d,", ptr->eng);
    printf("avg=%.2f\n", (ptr->math + ptr->eng)/2.0);
    return (0);
}