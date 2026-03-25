/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 20:13:48 by portos            #+#    #+#             */
/*   Updated: 2026/03/25 21:08:13 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *node;
    void    *new_content;
    t_list  *new_lst;

    new_lst = NULL;
    node = NULL;
    if (!lst || !f || !del)
        return (NULL);
    while (lst)
    {
        new_content = f(lst->content);
        node = ft_lstnew(new_content);
        if (!node)
        {
            del(new_content);
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, node);
        lst = lst->next;
    }
    return (new_lst); 
}
