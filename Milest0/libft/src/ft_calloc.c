#include "../include/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (malloc(1));
	if (size != 0 && size * nmemb > (size_t)-1)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
