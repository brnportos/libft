#include <unistd.h>

/*
 1. Loop through each character of s1 (until '\0'):
   a. Loop through each character of s2 (until '\0'):
      - If s1[i] == s2[j]:
           → return &s1[i] or s1 + i  (pointer to that character)
   b. No match found → move to next character in s1

2. If outer loop ends with no match found:
   → return NULL
 */

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return (&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
