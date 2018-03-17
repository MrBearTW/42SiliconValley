#include <unistd.h>

int	ft_putchart(char c)
{
    write(1, &c, 1);
    return(0);
}

#include <unistd.h>

int ft_putchart1(char c)
{
    write(1, &c, 1);
    return(0);
}