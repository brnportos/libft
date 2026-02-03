#include "../include/libft.h"

int ft_isalpha(int alpha)
{
	return ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122));
}
