#include "do_op.h"

int	ft_atoi(char *str)
{
	int	i = 0;
	int	nbr = 0;
	int	sign = 1;

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
