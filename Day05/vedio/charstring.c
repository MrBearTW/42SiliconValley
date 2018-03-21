#include<unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putstr(char *str)
{
    int index;

    index = 0;
    while(str[index]!='\0')
    {
        ft_putchar(str[index]);
        index++;
    }
}

void replace_first_h_with_y(char *str)
{
    str[0]='y';
}

void replace_first_char(char *src,char *dest)
{
    dest[0] = src[0];
}


int main(void)
{
    char str1[] = "Hello";
    char str2[] = "Yello";

    ft_putstr(str1);
     ft_putstr(str2);
    ft_putchar('\n');
//    replace_first_h_with_y(str1);
    replace_first_char(str1, str2);
    ft_putstr(str1);
    ft_putstr(str2);
    ft_putchar('\n');
    return 0;
}