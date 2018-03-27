#include<stdio.h>
#include<string.h>

int main(void){
    int i;
    char s[10]="42school";
    char *p;

    p=s;
    for(i=0;i<strlen(s);i++)
        printf("p[i]= %c,*(p+i)= %c,s[i]= %c,*(s+i)= %c\n",p[i],*(p+i),s[i],*(s+i));
}