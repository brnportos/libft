#include "../include/libft.h"

void	ft_bzero(void *buf, size_t len)
{
	unsigned char *ptr;

	ptr = (unsigned char *)buf;
	ft_memset(ptr, 0, len);
}
