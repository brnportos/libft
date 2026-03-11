/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:51:52 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:51:53 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;

    if (!s)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    sub = malloc(sizeof * sub * (len +1));
    if (!sub)
        return (NULL);
    ft_strlcpy(sub, s + start, len + 1);
    return (sub);
}
