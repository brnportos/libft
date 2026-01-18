#include "../include/libft.h"
#include <assert.h>
#include <stdio.h>

void	ft_TDD()
{
	assert(ft_isalpha('A') == 1);
	assert(ft_isalpha('Z') == 1);
	assert(ft_isalpha('a') == 1);
	assert(ft_isalpha('z') == 1);
	assert(ft_isalpha(00) == 0);
	assert(ft_isalpha(64) == 0);
	assert(ft_isalpha(91) == 0);
	assert(ft_isalpha(96) == 0);
	assert(ft_isalpha(123) == 0);
	printf(GREEN"ft_isalpha TDD: Passed\n"RESET);
}

int	main()
{
	printf("Start ft_isalpha TDD\n");
	ft_TDD();
	printf("All tests passed successfully\n");	
}
