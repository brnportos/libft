#include "../include/libft.h"

void    sort_single_linked_lst(t_list **root)
{
    t_list  *prev;
    t_list  *curr;
    t_list  *next;

    prev = NULL;
    curr = *root;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *root = prev;
}


