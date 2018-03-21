#include <stdio.h>
 
int main(void) {
    int b = 2;
    int* pointer = &b;
 
    printf("變數 b 的值：%d\n", b);     //2
    printf("變數 b 的地址：%p\n", &b);      //0x7ffee6d9f948
    printf("pointer 的值：%p\n", pointer);      //0x7ffee6d9f948
    printf("\n"); //換行
    
    *pointer = 100;
 
    printf("*pointer 的值：%d\n", *pointer);        //100
    printf("變數 b 的值：%d\n", b);     //100
    printf("變數 pointer 的地址：%p\n", &pointer);      //0x7ffee6d9f940
 
    return 0;
}