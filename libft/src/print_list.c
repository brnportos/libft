/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:52:05 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:52:06 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>

void    print_list(t_list *node)
{
    while (node != NULL)
    {
        printf("%d->", *(int *)node->content);
        node = node->next;
    }
}