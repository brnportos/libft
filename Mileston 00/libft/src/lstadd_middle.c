/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_middle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:13:57 by portos            #+#    #+#             */
/*   Updated: 2026/03/24 21:02:39 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    lstadd_middle(t_list **head, int content, int position)
{
    t_list *node;
    t_list  *tmp;
    int i;
    
    tmp = *head;
    i = 0;
    node = ft_lstnew(content);
    if (!node)
        return ;
    if (position == 1)
    {
        node->next = tmp;
        *head = node;
    }
    else
    {
        while (tmp && i++ < position)
        {
            curr = tmp;
            tmp = tmp->next;
        }
        curr->next = node;
        node->next = tmp;
    }  
}
