#include <stdio.h>
#include <stdlib.h>

/*
 1. Check if argc == 2
   → if not, print newline and exit

2. Convert argv[1] to integer n using atoi

3. If n == 1:
   → print "1" and newline, exit

4. Set divisor d = 2

5. Loop while n > 1:
   a. While n is divisible by d (n % d == 0):
      - If n == d: print d      (last factor, no '*' after)
      - Else:      print d, '*' (more factors coming)
      - Divide n by d  (n = n / d)
   b. d++  (try next divisor)

6. Print newline
 */

int	ft_atoi(char *str)
{
	int	nbr;
	int	sign;
	int	i;

	nbr = 0;
	sign = 1;
	i = 0;
	if (str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
			i++;
		}
		else
			i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (sign * nbr);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	n = ft_atoi(av[1]);
		int	d = 2;
		if (n == 1)
			printf("1");

		while (n > 1)
		{
			while (n % d == 0)
			{
				if (n == d)
					printf("%d", d);
				else
					printf("%d*", d);
				n = n / d;
			}
			d++;
		}
	}
	printf("\n");
}
