/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 19:49:29 by portos            #+#    #+#             */
/*   Updated: 2026/03/16 20:20:54 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *last;

    if (!lst)
        return (NULL);
    last = lst;
    while (last->next)
        last = last->next;
    return (last);
}
