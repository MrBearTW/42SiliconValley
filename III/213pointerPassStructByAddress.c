#include<stdio.h>
#include<stdlib.h>
struct data{
    char name[10];
    int math;
};
void swap(struct data *p1,struct data *p2){
    struct data tmp;
    tmp=*p1;
    *p1=*p2;
    *p2=tmp;
}
int main(void){
    struct data s1={"Zack",94};
    struct data s2={"Musk",87};
    swap(&s1,&s2);
    printf("after swap:\n");
    printf("s1.name=%s,s1.math=%d\n",s1.name,s1.math);
    printf("s2.name=%s,s2.math=%d\n",s2.name,s2.math);
    return 0;
}