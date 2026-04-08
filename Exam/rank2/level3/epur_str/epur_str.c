#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i = 0;
		int	epur = 0;

		while (av[1][i] && av[1][i] <= 32)
			i++;
		while (av[1][i])
		{
			if(av[1][i] <= 32)
				epur = 1;
			else
			{
				if (epur == 1)
					write(1, " ", 1);
				epur = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
