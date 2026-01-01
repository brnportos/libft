#include "../include/libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*ptr;
	size_t		i;

	ptr = (unsigned char *)dest;
	i = 0;
	while (i < len)
		ptr[i++] = c;
	return (dest);
}
