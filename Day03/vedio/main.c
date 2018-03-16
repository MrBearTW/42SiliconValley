void ft_putchar(char ptr);
void ft_putnbr(int ptr);
void ft_putaddr(void *ptr);

int main(void)
{
    int a;
    int *ptr;

    a = 3;
    ptr = &a;
    a = 42;
    ptr = &a;
    ft_putaddr(ptr);
    
    return (0);
}