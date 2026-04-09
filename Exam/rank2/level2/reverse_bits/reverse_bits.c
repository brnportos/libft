#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char bits = 0;
	int	i = 0;

	while (i < 8)
	{
		bits = (bits << 1) | ((octet >> i) & 1);
		i++;
	}
	return (bits);
}

#include <stdio.h>

void    print_bits(unsigned char octet);

int	main()
{
	unsigned char bit = reverse_bits(2);
	print_bits(bit);
}

#include <unistd.h>

void    print_bits(unsigned char octet)
{
        unsigned int    bits;
        int     i = 7;

        while(i >= 0)
        {
                bits = (octet >> i & 1) + '0';
                write(1, &bits, 1);
                i--;
        }
}
