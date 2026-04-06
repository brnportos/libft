#include <unistd.h>

int	prime_nbr(int n)
{
	int	i = 2;

	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int	ft_atoi(char *str)
{
	int	n;
	int	sign;
	int	i;

	n = 0;
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
			n = n * 10 + (str[i] - '0');
		i++;
	}
	return (sign * n);
}

int	main(int ac, char **av)
{
	if (ac == 1 || ft_atoi(av[1]) < 0)
	{
		write(1, "0", 1);
	}

	if (ac == 2)
	{
		int	i = 2;
		int	sum = 0;
		int	n = ft_atoi(av[1]);
		while (i <= n)
		{
			if (prime_nbr(i))
				ft_putnbr(i);
				//sum += n;
			i++;
		}
		//ft_putnbr(sum);
	}
	write (1, "\n", 1);
}
