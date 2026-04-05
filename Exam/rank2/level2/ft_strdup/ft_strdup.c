#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char	*dup;
	int	i;

	i = 0;
	dup = malloc(ft_strlen(src) * sizeof * dup + 1);
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] == '\0';
	return (dup);

}
#include <stdio.h>
int	main()
{
	char	*src = "Hello";
	char *dup = ft_strdup(src);
	printf("%s\n", dup);
}
