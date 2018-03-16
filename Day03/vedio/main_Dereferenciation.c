void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_putaddr(void *ptr);

int main(void)
{
    int a;
    int *ptr;

    a = 3;
    ptr = &a;
    ft_putnbr(*ptr);
    a = 42;
    ft_putchar('\n');
    ft_putnbr(*ptr);
    return (0);
}