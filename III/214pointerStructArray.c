#include<stdio.h>
#include<stdlib.h>
#define MAX 3
struct data{
    char name[10];
    int math;
};
int maximum(struct data arr[]){
    int m,i,index;
    m=arr->math;
    for(i=0;i<MAX;i++)
        if((arr+i)->math>m){
            m=(arr+i)->math;
            index=i;
        }
    return index;
}
int main(void){
    int idx;
    struct data s1[MAX]={{"Mary",87},{"Tom",94},{"Bill",89}};
    idx=maximum(s1);
    printf("%s has high,",(s1+idx)->name);
    printf("score is %d\n",(s1+idx)->math);
    return 0;
}