#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("enter num (0:quit):\n");
    scanf("%d",&num);
    while (num != 0)
    {
        sum = sum + num;
        scanf("%d", &num);
    }
    printf("sum is %d.\n",sum);
    return (0);
}