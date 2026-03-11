/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:49:31 by portos            #+#    #+#             */
/*   Updated: 2026/03/11 18:49:32 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_bzero(void *buf, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char *)buf;
	ft_memset(ptr, 0, len);
}
