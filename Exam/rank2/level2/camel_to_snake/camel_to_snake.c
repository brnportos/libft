#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i = 0;
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				write(1, "_", 1);
				ft_putchar(av[1][i] + 32);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

/*
 The algorithm
 1. Check if an argument was passed
   → If no argument, print nothing and exit

2. Get the input string (argv[1])

3. Loop through each character of the string:
   a. If the character is an UPPERCASE letter:
      - Print an underscore '_'
      - Print the lowercase version of that character
   b. Otherwise:
      - Print the character as-is

4. Print a newline '\n' at the end
 */
