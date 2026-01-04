#include "../../include/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	int	i;
	unsigned char *dst_ptr;
	unsigned char *src_ptr;

	i = 0;
	dst_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (i < len)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
