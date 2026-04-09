#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i = 0;
		int	j;
		char check[256] = {0};
		while (av[1][i])
		{
			check[(int)av[1][i]] = 1;
			i++;
		}
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j] && check[(int)av[1][i]] == 1)
				{
					write(1, &av[1][i], 1);
					check[(int)av[1][i]] = 0;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
