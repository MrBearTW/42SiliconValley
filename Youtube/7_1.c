#include <stdio.h>
void str_print(char str[])
{
    printf("%s\n", str);
}

int main()
{
    char str[] = "42school US";
    str_print(str);
    return 0;
}