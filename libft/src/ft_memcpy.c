#include "../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	unsigned char *dst_ptr;
	unsigned char *src_ptr;

	if (!dest || !src)
		return (NULL);
	dst_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
