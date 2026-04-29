/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_middle_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 18:34:41 by portos            #+#    #+#             */
/*   Updated: 2026/04/01 19:06:58 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    del_middle_node(t_list **head, int  position)
{
    t_list  *tmp;
    t_list  *curr;
    int i;

    if (!*head)
        return ;
    curr = *head;
    if (position == 1)
    {
        *head = (*head)->next;
        free(curr);
    }
    i = 1;
    while (curr && i < position)
    {
        tmp = curr;
        i++;
        curr = curr->next;
    }
    tmp->next = curr->text;
    free(curr);
}
