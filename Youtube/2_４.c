#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("enter 1 int");
    scanf("%d", &num1);
    printf("enter 2 int");
    scanf("%d", &num2);
    printf("enter 3 int");
    scanf("%d", &num3);
    double average = (num1 + num2 + num3) / 3.;
    //double average = (num1 + num2 + num3) /(double) 3;  //強制轉型
    printf("Average:%f\n",average);
    return (0);
}

