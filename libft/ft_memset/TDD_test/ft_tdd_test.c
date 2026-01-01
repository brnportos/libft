#include "../include/libft.h"
#include <assert.h>

void	memset_TDD_Test()
{
	size_t	i;
	char	*buffer;
	
	buffer = malloc(10);
	if (!buffer)
		return ;
	ft_memset(buffer, 'A', 10);
	i = 0;
	printf("Buffer values:");
	while (i < 10)
	{
		printf("%d ", buffer[i]);
		i++;
	}

	i = 0;
	while (i < 10)
	{
		assert(buffer[i] == 'A');
		i++;
	}
	printf("\n");
	printf("The memset_TDD_Tests: passed.\n");
	free(buffer);
}

int	main()
{
	printf("Start the memset TDD Tests\n");
	memset_TDD_Test();
	printf("All tests passed successfully.\n");
	return (0);
}
