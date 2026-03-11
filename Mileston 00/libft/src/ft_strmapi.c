/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:51:29 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:51:30 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *strmapi;
    size_t  len;
    size_t  i;

    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    strmapi = malloc(len + 1);
    if (!strmapi)
        return (NULL);
    i = 0;
    while (i < len)
    {
        strmapi[i] = f(i, s[i]);
        i++;
    }
    strmapi[i] = '\0';
    return (strmapi);
}

/*char ff(unsigned int i, char c)
{
    return (c + i);
}
#include <stdio.h>

int main()
{
    printf("%s\n", (char *)ft_strmapi("azc", ff));
}*/
