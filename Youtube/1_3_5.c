#include <stdio.h>
int main(){
    /*
    int integer1, integer2, integer3 sum;
    printf("enter the first integer: ");
    scanf("%d",&integer1);
    printf("enter the second integer: ");
    scanf("%d",&integer2);
    printf("enter the third integer: ");
    scanf("%d",&integer3);
    sum = integer1 + integer2 + integer3;
    printf("Sum is %d. \n",sum);
    return(0);
    */

    int integer,  sum;
    printf("enter the first integer: ");
    scanf("%d",&integer);
    sum = integer;
    printf("enter the second integer: ");
    scanf("%d",&integer);
    sum = sum +integer;
    printf("enter the third integer: ");
    scanf("%d",&integer);
    sum = sum + integer;
    printf("Sum is %d. \n",sum);
    return(0);

}