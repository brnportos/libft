#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/*
 1. Start a counter i = 0

2. Loop through each character s[i] (until '\0'):
   a. Loop through each character reject[j] (until '\0'):
      - If s[i] == reject[j]:
           → return i   (found a reject char, stop here)
   b. If no match found in reject → i++  (safe character, keep going)

3. Return i   (reached end of s with no reject char found)
 */
