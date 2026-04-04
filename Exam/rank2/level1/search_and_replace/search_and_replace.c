#include <unistd.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4 && !av[2][1] && !av[3][1])
	{
		int	i;
		char	search;

		i = 0;
		while (av[1][i])
		{
			search = av[1][i];
			if (search == av[2][0])
				search = av[3][0];
			write(1, &search, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
