#include "test.h"

void	ft_TDD_memset_basic_fill()
{
	size_t	i;
	char	buf[6];
	ft_memset(buf, 'B', 6);
	i = 0;
	while (i < 6)
	{
		assert(buf[i] == 'B');
		i++;
	}
	printf(GREEN"ft_memset TDD basic fill: passed\n"RESET);
}

void    ft_TDD_memset_zero_fill()
{
        size_t  i;
        char    buf[6];
        ft_memset(buf, 0, 6);
        i = 0;
        while (i < 6)
        {
                assert(buf[i] == 0);
                i++;
        }
        printf(GREEN"ft_memset TDD zero fill: passed\n"RESET);
}

void	ft_TDD_memset_partial_fill()
{
	char	buf[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	ft_memset(buf, 'x', 3);

	assert(buf[0] == 'x');
	assert(buf[1] == 'x');
	assert(buf[2] == 'x');
	assert(buf[3] == 'd');
	assert(buf[4] == 'e');
	assert(buf[5] == 'f');
	printf(GREEN"ft_memset TDD partial fill: passed\n"RESET);
}

void	ft_TDD_memset_zero_length()
{
	char buf[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	ft_memset(buf, 'x', 0);

	assert(buf[0] == 'a');
	assert(buf[1] == 'b');
	assert(buf[2] == 'c');
	assert(buf[3] == 'd');
	assert(buf[4] == 'e');
	assert(buf[5] == 'f');
	printf(GREEN"ft_memset TDD  zero length: passed\n"RESET);
}

void	ft_TDD_memset_return_value()
{
	char	buf[6];
	void	*retrn;

	retrn = ft_memset(buf, 'a', 6);
	assert(retrn == buf);
	printf(GREEN"ft_memset TDD  return value: passed\n"RESET); //vary immportant
}

void	ft_TDD_memset_value_truncation()
{
	size_t	i;
	unsigned char	buf[6];

	ft_memset(buf, 300, 6); //300 % 256 = 44
	i = 0;
	while(i < 6)
	{
		assert(buf[i] == (unsigned char)300);
		i++;
	}
	printf(GREEN"ft_memset TDD value truncation: passed\n"RESET);
}

void	ft_TDD_memset_large_buffer()
{
	size_t	i;
	char	buf[1000];
	ft_memset(buf, 'z', 1000);

	i = 0;
	while(i < 1000)
	{
		assert(buf[i] == 'z');
		i++;
	}
	printf(GREEN"ft_memset TDD large buffer: passed\n"RESET);
}

void	ft_TDD_memset_int_array()
{
	size_t	i;
	int	arr[6];

	ft_memset(arr, 0, sizeof(arr));
	i = 0;
	while(i < 6)
	{
		assert(arr[i] == 0);
		i++;
	}
	printf(GREEN"ft_memset TDD integer array: passed\n"RESET);
}

void	ft_TDD_memset_against_libc()
{
	size_t	i;
	char	a[10];
	char	b[10];

	ft_memset(a, 'P', 10);
	memset(b, 'P', 10);
	i = 0;
	while(i < 10)
	{
		assert(a[i] == b[i]);
		i++;
	}
	printf(GREEN"ft_memset TDD against libc: passed\n"RESET);
}
