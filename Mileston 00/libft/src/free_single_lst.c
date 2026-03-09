#include "../include/libft.h"

void    free_single_lst(t_list **root)
{
    t_list  *curr;
    t_list  *tmp;

    curr = *root;
    while (curr != NULL)
    {
        tmp = curr;
        curr = curr->next;
        free(tmp);
    }
    *root = NULL;
}