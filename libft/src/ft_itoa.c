/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:50:03 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:50:04 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int  ft_len(int n)
{
    int len;

    len = 0;
    if (n < 0)
        len = 1;
    while (n)
    {
        n /= 10;
        len++;
    }
    return (len);
}

static long ft_sign_checking(long n_tmp)
{
    long    nbr;

    if (n_tmp < 0)
        nbr = -n_tmp;
    else
        nbr = n_tmp;
    return (nbr);
}

char    *ft_itoa(int n)
{
    char    *str;
    long    n_tmp;
    long    nbr;
    int     len;

    n_tmp = n;
    len = ft_len(n_tmp);
    str = malloc(sizeof * str * len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    nbr = ft_sign_checking(n_tmp);
    while (len > 0)
    {
        str[len -1] = (nbr % 10) + '0';
        nbr /= 10;
        if (n_tmp < 0 && len == 1)
            break;
        len--;
    }
    if (n_tmp < 0)
        str[0] = '-';
    return (str);
}
