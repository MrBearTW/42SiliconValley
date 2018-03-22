#include<stdlib.h>
#define LEN     42000000

int     main()
{
    int     i;
    char *str;
    //char    str[LEN + 1];

    str = (char*)malloc(sizeof(*str) * (LEN + 1));
    i=0;
    while(i<LEN)
    {
        str[i] = '0' + (i %10);
        i++;
    }
    str[i] = '\0';
    free(str);
    while(1);
    //ft_putstr(str);
    //ft_putstr("\n");
    return(0);
}