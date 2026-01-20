#ifndef TEST_H
# define TEST_H
# include "../include/libft.h"
# include <stdio.h>
# include <assert.h>

void    ft_TDD_basic_bzero();
void    ft_TDD_partial_bzero();
void    ft_TDD_bzero_zero_length();
void    ft_TDD_bzero_int_array();
void    ft_TDD_bzero_large_buffer();
void    ft_TDD_bzero_against_libc();
void    ft_isalpha_TDD();
void    ft_isdigit_TDD();
void    ft_TDD_basic_memcpy();
void    ft_TDD_partial_memcpy();
void    ft_TDD_memcpy_zero_length();
void    ft_TDD_memcpy_return_value();
void    ft_TDD_memcpy_int_array();
void    ft_TDD_memcpy_large_buffer();
void    ft_TDD_memcpy_against_libc();
void    ft_TDD_memset_basic_fill();
void    ft_TDD_memset_zero_fill();
void    ft_TDD_memset_partial_fill();
void    ft_TDD_memset_zero_length();
void    ft_TDD_memset_return_value();
void    ft_TDD_memset_value_truncation();
void    ft_TDD_memset_large_buffer();
void    ft_TDD_memset_int_array();
void    ft_TDD_memset_against_libc();

#endif
