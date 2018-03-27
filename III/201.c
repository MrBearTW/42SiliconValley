#include<stdio.h>
int main(void){
    int money = 100;
    int *p;

    p = &money;
    printf("*p=%d,p=%p\n",*p,p);
    printf("money=%d,&money=%p\n",money,&money);
    return 0;
}