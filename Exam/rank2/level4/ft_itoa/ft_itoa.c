#include <stdlib.h>

int	count_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	else if (n == 0)
		return (2);
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int	i;
	int	len;
	int	neg;
	long	n = nb;

	len = count_len(n);
	str = malloc(len);
	if (!str)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}

	str[len -1] = '\0';
	i = len - 2;
	neg = (n < 0);
	if (!neg)
		n = -n;
	while (n!= 0)
	{
		str[i] = -(n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(2147483647));
}
