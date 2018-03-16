#include <unistd.h>

int	ft_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

/*
int ft_print_alphabet(char c,int n)
{
    int i;
    for (i = 122; i > 96; i--)
        printf("%c", i);
    system("PAUSE");
    return 0;
}
*/

int	main()
{
//    ft_print_alphabet('@',42);
    ft_putchar('\n');
    return (0);
}
