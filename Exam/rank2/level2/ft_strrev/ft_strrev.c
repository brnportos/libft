#include <unistd.h>

/*
 1. If str is NULL or empty, return str immediately

2. Set left  = 0
   Set right = length of str - 1

3. While left < right:
   a. Swap str[left] and str[right]
      - tmp        = str[left]
      - str[left]  = str[right]
      - str[right] = tmp
   b. left++
   c. right--

4. Return str
 */
size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	size_t	left;
	size_t	right;
	char	tmp;
	
	left = 0;
	right = ft_strlen(str) -1;
	if (right == 0)
		return (str);
	while (left < right)
	{
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	char s[] = "Hello";
	ft_strrev(s);
	printf("%s\n", s);
}
