#include <stdio.h>
void str_print(char str[])
{
    printf("%s\n", str);
}

int main()
{
    char str1[] = {'4','2','s','c','h','o','o','l',' ','U','S','\0'};
    char str2[] = "42school US";
    str_print(str1);
    str_print(str2);
    return 0;
}