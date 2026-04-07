void sort_int_tab(int *tab, unsigned int size)
{
	int	i;
	int	j;
	int	tmp;

	tmp = 0;
	i = 0;
	while (i < size -1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main()
{
	int	i = 0;
	int	tab[9] = {2 , 4, 3, 7, 9, 6, 8, 5, 1};
	sort_int_tab(tab, 9);
	
	while (i < 9)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
