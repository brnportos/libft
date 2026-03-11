/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:50:33 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:50:34 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dst;
    unsigned char *srce;
    
    if(!dest || !src)
        return (NULL);
    dst = (unsigned char *)dest;
    srce = (unsigned char *)src;
   if(srce < dst)
   {
	   while(n-- > 0)
        dst[n] = srce[n];
   }
    else
        ft_memcpy(dst, srce, n);
    return (dest);
}
