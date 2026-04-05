#include "do_op.h"

int	main(int ac, char **av)
{
	int	a;
	int	b;
	
        if (ac == 4)
	{
		a = ft_atoi(av[1]);
        	b = ft_atoi(av[3]);
		if (av[2][0] == '+')
			printf("%d", a + b);
		else if (av[2][0] == '-')
                        printf("%d", a - b);
		else if (av[2][0] == '*')
                        printf("%d", a * b);
		else if (av[2][0] == '+')
                        printf("%d", a + b);
		else if (av[2][0] == '/' && b != 0) 
                        printf("%d", a / b);
		else if (av[2][0] == '%' && b != 0)
                        printf("%d", a % b);
	}
	printf("\n");
}
