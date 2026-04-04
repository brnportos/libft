

int	countworld(char *str, char c)
{
	int	i;
	int	world;

	i = 0;
	world = 0;
	while (str[i])
	{
		if (str[i] != c && str[i +1] == c || str[i + 1] == '\0')
			world++;
		i++;
	}
	return (world);
}
/*/
#include <stdio.h>

int	main ()
{
	printf("%d\n", countworld("Hello world 42", ' ')); 
}
*/