/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_doubly_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:49:16 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:49:17 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

