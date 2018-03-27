#include<stdio.h>

int add3(int(*func)(int,int),int a,int b,int c){
    return func(a,b)+c;
}
int main(void){
    int a=10,b=20,c=30;
    printf("10+20+30=%d\n",add3(add,a,b,c));
return 0;
}