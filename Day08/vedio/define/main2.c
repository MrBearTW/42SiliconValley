//# define TOTO "42 silicon valley"
//#define TOTO(x) int x;
#define TOTO(x) #x

//TOTO main(void)
int main(void)
{
//    char    *str;
//    str = TOTO;
    TOTO(a)
    TOTO(b)
    return(0);
}