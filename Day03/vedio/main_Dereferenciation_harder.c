void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_putaddr(void *ptr);

int main(void)
{
    int a;
    int *ptr;
    int **ptr2;

    a = 3;
    ptr = &a;
    ptr2 = &ptr;
    ft_putnbr(**ptr2);
    **ptr2 = 42;
    ft_putchar('\n');
    ft_putnbr(a);
    return (0);
}