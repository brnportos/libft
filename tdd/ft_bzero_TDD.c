#include "test.h"

void	ft_TDD_basic_bzero()
{
	char	buf[5] = {'a', 'b', 'c', 'd', 'e'};
	size_t	i;

	ft_bzero(buf, 5);
	i = 0;
	while(i < 5)
	{
		assert(buf[i] == 0);
		i++;
	}
	printf(GREEN"ft_bzero TDD basic: passed\n"RESET);
}

void	ft_TDD_partial_bzero()
{
	char	buf[5] = {'a', 'b', 'c', 'd', 'e'};

	ft_bzero(buf, 3);
	assert(buf[0] == 0);
	assert(buf[1] == 0);
	assert(buf[2] == 0);
	assert(buf[3] == 'd');
	assert(buf[4] == 'e');
	printf(GREEN"ft_bzero TDD partial bzero: passed\n"RESET);
}

void	ft_TDD_bzero_zero_length()
{
	char	buf[5] = {'a', 'b', 'c', 'd', 'e'};

	ft_bzero(buf, 0);
	assert(buf[0] == 'a');
	assert(buf[1] == 'b');
	assert(buf[2] == 'c');
	assert(buf[3] == 'd');
	assert(buf[4] == 'e');
	printf(GREEN"ft_bzero TDD zero length: passed\n"RESET);
}

void	ft_TDD_bzero_int_array()
{
	size_t	i;
	int	arr[5] = {1, 2, 3, 4, 5};

	ft_bzero(arr, sizeof(arr));
	i = 0;
	while(i < 5)
	{
		assert(arr[i] == 0);
		i++;
	}
	printf(GREEN"ft_bzero TDD integer array: passed\n"RESET);
}

void	ft_TDD_bzero_large_buffer()
{
	size_t	i;
	char	buf[1000];

	ft_bzero(buf, 1000);
	i = 0;
	while(i < 1000)
	{
		assert(buf[i] == 0);
		i++;
	}
	printf(GREEN"ft_bzero TDD large buffer: passed\n"RESET);
}

void	ft_TDD_bzero_against_libc()
{
	size_t	i;
	char	a[10];
	char	b[10];

	ft_bzero(a, 10);
	bzero(b, 10);
	i = 0;
	while(i < 10)
	{
		assert(a[i] == b[i]);
		i++;
	}
	printf(GREEN"ft_bzero TDD against libc: passed\n"RESET);
}
