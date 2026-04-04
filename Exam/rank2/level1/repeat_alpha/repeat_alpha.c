#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac != 1)
	{
		int	i;

		i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				int	rep = (av[1][i] - 'a' + 1);
				while (rep--)
					write(1, &av[1][i], 1);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				int	rep = (av[1][i] - 'A' + 1);
				while (rep--)
					write(1, &av[1][i], 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
