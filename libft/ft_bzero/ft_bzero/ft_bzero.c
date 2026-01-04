#include "../../include/libft.h"

void	ft_bzero(void *buffer, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char *)buffer;
	ft_memset(ptr, 0, len);
}
