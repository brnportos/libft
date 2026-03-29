/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_frt_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 18:35:12 by portos            #+#    #+#             */
/*   Updated: 2026/03/29 18:40:26 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..include/libft.h"

void    del_frt_node(t_list **head)
{
    t_list  *tmp;

    if (!*head)
        return (NULL);
    tmp = *head;
    *head = (*head)->next;
}