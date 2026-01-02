#include "../../include/libft.h"
#include <assert.h>

void	ft_bzero_TDD_Tests()
{
	int	num;
	int	*buffer;
	int	i;
	
	num = 10;
	buffer = (int *) malloc(sizeof(*buffer) * num);
	if(!buffer)
		return ;
	i = 0;
	while(i < num)
	{
		buffer[i] = 42;
		i++;
	}
	ft_bzero(buffer, sizeof(*buffer) * num);
	i = 0;
	while(i < num)
	{
		assert(buffer[i] == 0);
		i++;
	}
	printf("ft_bzero_TDD_Tests: passed\n");
	free(buffer);
	buffer = NULL;
}

int	main()
{
	printf("Start ft_bzero_TDD_Tests\n");
	ft_bzero_TDD_Tests();
	printf("All tests passed seccessfully\n");
}
