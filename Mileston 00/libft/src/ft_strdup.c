#include "../include/libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	dup = malloc(sizeof * dup * ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

