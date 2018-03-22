void    ft_putstr(char *str);
void    ft_putchar(char c);

int main(int argc,char **argv)
{
    ft_putstr("42 US siliconvalley ");
    if (argc == 2)
        {
            ft_putstr(argv[1]);
        }
    else
    {
        ft_putstr("usage: ./main2 9487\n");
        return (0);
    }
    //ft_putstr(argv[1]);
    ft_putchar('\n');
    return(0);
}