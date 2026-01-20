#include "test.h"

int     main()
{
        printf("Start ft_bzero TDD\n");
        ft_TDD_basic_bzero();
        ft_TDD_partial_bzero();
        ft_TDD_bzero_zero_length();
        ft_TDD_bzero_int_array();
        ft_TDD_bzero_large_buffer();
	ft_TDD_bzero_against_libc();
        printf("All tests passed successfully\n");
	printf("\n");
	printf("Start ft_isalpha TDD\n");
        ft_isalpha_TDD();
        printf("All tests passed successfully\n");
	printf("\n");
	printf("Start ft_isdigit TDD tests\n");
        ft_isdigit_TDD();
        printf("All tests passed successfully\n");
	printf("\n");
	printf("Start ft_memcpy TDD tests\n");
        ft_TDD_basic_memcpy();
        ft_TDD_partial_memcpy();
        ft_TDD_memcpy_zero_length();
        ft_TDD_memcpy_return_value();
        ft_TDD_memcpy_int_array();
        ft_TDD_memcpy_large_buffer();
        ft_TDD_memcpy_against_libc();
        printf("All tests passed successfully\n");
	printf("\n");
	printf("Start ft_memset TDD\n");
        ft_TDD_memset_basic_fill();
        ft_TDD_memset_zero_fill();
        ft_TDD_memset_partial_fill();
        ft_TDD_memset_zero_length();
        ft_TDD_memset_return_value();
        ft_TDD_memset_value_truncation();
        ft_TDD_memset_large_buffer();
        ft_TDD_memset_int_array();
        ft_TDD_memset_against_libc();
        printf("All tests passed successfully\n");
        return (0);
}
