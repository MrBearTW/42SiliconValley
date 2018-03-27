#include<stdio.h>

int main(void){
    char *name[3];
    char color[3][10]={"blue","red","white"};
    name[0] = color[0];
    name[1] = color[1];
    name[2] = color[2];
    printf("The color are: %s,%s,%s\n",name[0],name[1],name[2]);
    printf("The color are: %s\n",&color[0][1]);
    printf("The color are: %c\n",color[0][1]);
    }