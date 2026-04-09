int	max(int* tab, unsigned int len)
{
	int	i = 0;
	int	max = tab[0];
	while (i < len)
	{
		if (max <= tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>

int	main()
{
	int	tab[5] = {5, 6, 7, 8, 9};
	int	n = max(tab, 5);
	printf("%d\n", n);
}
