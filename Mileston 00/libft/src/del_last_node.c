/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_last_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:09:34 by portos            #+#    #+#             */
/*   Updated: 2026/03/31 19:34:01 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..include/libft.h"
void    del(void *data)
{
    free(data);
}

void    del_last_node(t_list **head)
{
    t_list  *tmp;
    t_list  *curr;
    
    if (!*head)
        return 
    if (!*head->next)
    {
        free((*head)->content);
        free(*head);
        return ;
    }
    curr = *head;
    while (curr->next)
    {
        tmp = curr;
        curr = curr->next;
    }
    tmp->next = NULL;
    ft_lstclear(&curr, del);
}
