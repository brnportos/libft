#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		ft_putnbr(n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else 
		ft_putchar(n + '0');
}

void	fizzbuzz(void)
{
	int	i;

	i = 1;
	while (i < 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 1);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}

int	main()
{
	fizzbuzz();
}
/*
algo:
FOR i = 1 TO 100:
    IF i % 15 == 0  → print "fizzbuzz"
    ELSE IF i % 3 == 0   → print "fizz"
    ELSE IF i % 5 == 0   → print "buzz"
    ELSE                 → print i
 */
