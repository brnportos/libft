#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;

	while (s[i])
	{
		int	j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j] == '\0')
			return (i);
		i++;
	}
}

#include <stdio.h>

int	main()
{
	printf("%ld\n", (size_t)ft_strspn("aabbcdXYZ", "abc"));
}
