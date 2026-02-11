#include "../include/libft.h"

char    *ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + len);
	while (len > 0)
	{
		if (s[len] == (unsigned char)c)
		       return ((char *)s + len);	
		len--;
	}
	if (s[len] == (unsigned char)c)
		return ((char *)s + len);
	return (NULL);

}
