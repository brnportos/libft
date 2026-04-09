unsigned int hcf(unsigned int a, unsigned int b)
{
	while (b != 0)
	{
		unsigned int tmp = b;
		b = a % b;
		a = tmp;
	}
	return (a);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	return ((a * b) / hcf(a, b));
}

#include <stdio.h>

int	main()
{
	printf("%d\n", (unsigned int)lcm(5, 8));
}
