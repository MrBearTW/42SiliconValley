#include <stdio.h>
int str_len(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[] = "42 us school";
    printf("Leanth: %zu\n", sizeof(str));
    printf("Leanth: %d\n", str_len(str));
    return (0);
}