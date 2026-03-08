#include "../include/libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new || !list)
        return ;
    curr->next = *lst;
    *lst = new;
}