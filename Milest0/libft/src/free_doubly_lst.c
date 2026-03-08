#include "../include/libft.h"

void    free_doubly_lst(t_node **tail, t_node **head)
{
    t_node  *curr;

    if (!*tail)
        return ;
    curr = *tail;
    while (curr->next != NULL)
    {
        curr = curr->next;
        free(curr->prev);
    }
    free(curr);
    *tail = NULL;
    *head = NULL;
}

