/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 19:51:03 by portos            #+#    #+#             */
/*   Updated: 2026/03/21 20:24:46 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

/*#include <stdio.h>

void    print_content(void *content);
int main()
{
    t_list  *lst;

    lst = NULL;
    ft_lstadd_back(&lst, ft_lstnew("Hello"));
    ft_lstadd_back(&lst, ft_lstnew("world"));
    ft_lstadd_back(&lst, ft_lstnew("!!!"));
    
    ft_lstiter(lst, print_content);
}

void    print_content(void *content)
{
    printf("%s\n", (char *)content);
}*/
