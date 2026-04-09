#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet << 4) | (octet >> 4));
}

void    print_bits(unsigned char octet);

int	main()
{
	unsigned char bits = swap_bits(65);
	print_bits(bits);
	write(1, "\n", 1);
}

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
