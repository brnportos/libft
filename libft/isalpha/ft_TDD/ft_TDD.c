#include "../../include/libft.h"

void	ft_isalpha_TDD()
{
	int	c;
	int	result;
	int	expected;
	
	c = 60;
	result = ft_isalpha(c);
	expected = 1;
	if(result == expected)
		printf("Succeed\n");
	else
		printf("Failed\n");
}

int	main()
{
	printf("Start TDD\n");
	ft_isalpha_TDD();
	printf("Passed successfully\n");
}
