#include "../../include/libft.h"

void	ft_bzero(void *buffer, size_t len)
{
	unsigned char *ptr;
	size_t		i;

	ptr = (unsigned char *)buffer;
	i = 0;
	while(i < len)
		ptr[i++] = 0;
}
