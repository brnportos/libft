/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_frt_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 18:35:12 by portos            #+#    #+#             */
/*   Updated: 2026/03/31 19:17:18 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "..include/libft.h"
void    del(void *data)
{
    free(data);
}
void    del_frt_node(t_list **head)
{
    t_list  *tmp;

    if (!*head)
        return (NULL);
    tmp = *head;
    *head = (*head)->next;
    tmp->next = NULL;
    ft_lstclear(&tmp, del);
}