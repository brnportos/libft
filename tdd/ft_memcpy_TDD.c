#include "test.h"

void	ft_TDD_basic_memcpy()
{
	size_t	i;
	char	src[5] = {'a', 'b', 'c', 'd', 'e'};
	char	dst[5];

	ft_memcpy(dst, src, 5);
	i = 0;
	while(i < 5)
	{
		assert(dst[i] == src[i]);
		i++;
	}
	printf(GREEN "ft_memcpy TDD basic memcpy: passed\n"RESET);
}

void	ft_TDD_partial_memcpy()
{
	char	src[5] = {'a', 'b', 'c', 'd', 'e'};
	char	dst[5] = {'x', 'x', 'x', 'x', 'x'};

	ft_memcpy(dst, src, 3);
	assert(dst[0] == 'a');
	assert(dst[1] == 'b');
	assert(dst[2] == 'c');
	assert(dst[3] == 'x');
	assert(dst[4] == 'x');
	printf(GREEN "ft_memcpy TDD partial memcpy: passed\n"RESET);
}

void	ft_TDD_memcpy_zero_length()
{
	char	src[5] = {'a', 'b', 'c', 'd', 'e'};
	char	dst[5] = {'p', 'm', 'n', 'l', 'k'};

	ft_memcpy(dst, src, 0);
	assert(dst[0] == 'p');
	assert(dst[1] == 'm');
	assert(dst[2] == 'n');
	assert(dst[3] == 'l');
	assert(dst[4] == 'k');
	printf(GREEN "ft_memcpy TDD zero length: passed\n"RESET);
}

void	ft_TDD_memcpy_return_value()
{
	char	src[3] = {'a', 'b', 'c'};
	char	dst[3];
	void	*retrn;

	retrn = ft_memcpy(dst, src, 3);
	assert(retrn == dst);
	printf(GREEN "ft_memcpy TDD return value: passed\n"RESET);
}

void	ft_TDD_memcpy_int_array()
{
	size_t	i;
	char	src[5] = {1, 2, 3, 4, 5};
	char	dst[5];

	ft_memcpy(dst, src, sizeof(src));
	i = 0;
	while(i < 5)
	{
		assert(dst[i] == src[i]);
		i++;
	}
	printf(GREEN "ft_memcpy TDD integer array: passed\n"RESET);
}

void	ft_TDD_memcpy_large_buffer()
{
	size_t	i;
	char	src[1000];
	char	dst[1000];

	i = 0;
	while(i < 1000)
	{
		src[i] = i % 128;
		i++;
	}

	ft_memcpy(dst, src, 1000);
	i = 0;
	while(i < 1000)
	{
		assert(dst[i] == src[i]);
		i++;
	}
	printf(GREEN "ft_memcpy TDD large buffer: passed\n"RESET);
}

void	ft_TDD_memcpy_against_libc()
{
	size_t	i;
	char	src[10];
	char	dst1[10];
	char	dst2[10];

	i = 0;
	while(i < 10)
	{
		src[i] = 'a' + i;
		i++;
	}
	ft_memcpy(dst1, src, 10);
	memcpy(dst2, src, 10);
	i = 0;
	while(i < 10)
	{
		assert(dst1[i] == dst2[i]);
		i++;
	}
	printf(GREEN "ft_memcpy TDD against libc: passed\n"RESET);
}
