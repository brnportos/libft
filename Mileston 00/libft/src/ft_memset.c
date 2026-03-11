/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:50:40 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:50:41 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *dest, int value, size_t len)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char *)dest;
	i = 0;
	while (i < len)
		ptr[i++] = value;
	return (dest);
}
