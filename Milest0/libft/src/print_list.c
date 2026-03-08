#include "../include/libft.h"
#include <stdio.h>

void    print_list(t_list *node)
{
    while (node != NULL)
    {
        printf("%d->", *(int *)node->content);
        node = node->next;
    }
}