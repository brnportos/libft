#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	i = 0;
	int	len = (end - start) < 0 ? ((end - start) * -1) + 1 : (end - start) + 1;
	int	*arr = malloc(sizeof * arr * len);
	if (!arr)
		return (0);
	while (i < len)
	{
		if (start <= end)
			arr[i] = start++;
		else
			arr[i] = start--;
		i++;
	}
	return (arr);
}

#include <stdio.h>
int	main()
{
	int	i = 0;
	int	*arr = ft_range(0, -5);
	while (i <= 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}
