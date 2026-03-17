/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 19:51:10 by portos            #+#    #+#             */
/*   Updated: 2026/03/17 19:59:15 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;
    
    if (!*lst || !lst && new)
        *lst = new;
    else if (!new)
        return ;
    else
    {
        last = ft_lstlast(*lst);
        last->next = new;
    }
}