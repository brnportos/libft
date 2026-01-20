#include "test.h"

void	ft_isdigit_TDD()
{
	assert(ft_isdigit('0') == 1);
	assert(ft_isdigit('9') == 1);
	assert(ft_isdigit(0) == 0);
	assert(ft_isdigit(47) == 0);
	assert(ft_isdigit(58) == 0);
	printf(GREEN"ft_isdigit TDD: Passed\n"RESET);
}
