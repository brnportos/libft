#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i;

		i = 0;
		while (av[1][i] && av[1][i] <= 32)
			i++;
		while (av[1][i] && av[1][i] != 32)
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
/*
Start at index i = 0
While str[i] is a space or tab
    → move i forward
Start at index i = 0
While str[i] is a space or tab
    → move i forward
While str[i] is NOT a space, tab, or '\0'
    → print str[i]
    → move i forward
Print '\n'
*/
