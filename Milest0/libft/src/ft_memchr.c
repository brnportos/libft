#include "../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_tmp;
	unsigned char	c_tmp;

	s_tmp = (unsigned char *)s;
	c_tmp = (unsigned char)c;
	while(*s_tmp &&  n-- > 0)
	{
		if (*s_tmp == c_tmp)
			return ((void *)s_tmp);
		s_tmp++;
	}
	return (0);
}
