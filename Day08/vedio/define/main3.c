#define TOTO(x) #x

int main(void)
{
    char    *str;

    str = TOTO(42school);
    write(1,str,1);
    return(0);
}