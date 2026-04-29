/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:50:10 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:50:11 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new || !lst)
        return ;
    new->next = *lst;
    *lst = new;
}