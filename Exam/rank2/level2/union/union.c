#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i;
		int	j;
		char check[256] = {0};

		i = 0;
		while (av[1][i])
		{
			check[av[1][i]] = 1;
			i++;
		}
		j = 0;
		while (av[1][j])
		{
			check[av[1][j]] = 1;
			j++;
		}

		i = 0;
		while (av[1][i])
		{
			if (av[1][i] && check[av[1][i]] == 1)
				write(1, &av[1][i], 1);
			i++;
		}
		j = 0;
		while (av[1][j])
		{
			if (av[1][i] && check[av[1][j]] == 1)
				write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
