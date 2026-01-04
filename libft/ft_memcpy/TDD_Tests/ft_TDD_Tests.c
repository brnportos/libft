#include "../../include/libft.h"
#include <assert.h>

void	ft_memcpy_TDD_Tests()
{
	const char *src = "Hello, world";
	char	*dst;
	
	dst = (char *)malloc(sizeof(*dst));
	if (!dst)
		return ;
	assert(dst != NULL);
	ft_memcpy(dst, src, strlen(src));
	assert(strcmp(dst, src) == 0);
	free(dst);
	printf("ft_memcpy_TDD_Tests: passed\n");
}

int	main()
{
	printf("Start TDD Tests\n");
	ft_memcpy_TDD_Tests();
	printf("All tests passed successfully\n");
	return 0;
}
