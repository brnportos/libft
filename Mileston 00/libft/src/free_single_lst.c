/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_single_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:49:22 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:49:23 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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