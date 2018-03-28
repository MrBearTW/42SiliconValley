#include "list.h"

void print_list(t_list *list)
{
    while (list)
    {
    ft_purstr(list->str);
    list = list->next;
    }
}