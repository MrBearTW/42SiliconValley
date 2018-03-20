#include <stdio.h>
int main()
{
    char strA[] = "test";
    char strB[] = {'t', 'e', 's', 't', '\0'};

    printf(strA); //O
    printf(strB); //O

    printf("test");                     //O
    //printf({'t', 'e', 's', 't', '\0'}); //X

    char *strC = "test";                     //(?字串字面常數)
    //char *strD = {'t', 'e', 's', 't', '\0'}; //X

    printf((char[]){'t', 'e', 's', 't', '\0'}) // C99：複合字面常數

    return (0);
}