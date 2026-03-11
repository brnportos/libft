/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:50:14 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:50:15 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new_node;

    if (!content)
        return (NULL);
    new_node = malloc(sizeof * new_node);
    if (new_node == NULL)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

/*#include <stdio.h>

int     main()
{
    char *str = "Hello";
    int     nbr = 8;
    char    *st = NULL;

    t_list  *root = ft_lstnew(str);
    t_list  *head = ft_lstnew(&nbr);
    printf("%s\n", (char *)root->content);
    printf("%d\n", *(int *)head->content);
    free(root);
    free(head);
}*/