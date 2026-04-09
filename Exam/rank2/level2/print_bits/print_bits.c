#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned int	bits;
	int	i = 7;

	while(i >= 0)
	{
		bits = (octet >> i & 1) + '0';
		write(1, &bits, 1);
		i--;
	}
}

int	main()
{
	print_bits(42);
	write(1, "\n", 1);
}
