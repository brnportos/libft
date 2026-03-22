/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_middle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:13:57 by portos            #+#    #+#             */
/*   Updated: 2026/03/22 21:01:09 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    lstadd_middle(t_list **head, int content, int position)
{
    t_list *node;
    t_list  *curr;
    int i;
    
    node = ft_lstnew(content);
    if (!node)
        return ;
    if (position == 1)
    {
        node->next = *head;
        *head = node;
    }
    i = 0;
    while (*head && i < position)
    {
        curr = *head;
        *head = ((*head)->next);
        i++;
    }
    curr->next = node;
    node->next = *head;   
}
