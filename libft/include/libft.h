#ifndef LIBFT_H
#define LIBFT_H

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define RESET   "\033[0m"

#include <unistd.h>

int	ft_isalpha(int alpha);
int     ft_isdigit(int digit);
int     ft_isalnum(int c);
void    *ft_memset(void *dest, int value, size_t len);
void    ft_bzero(void *buffer, size_t len);
void    *ft_memcpy(void *dest, const void *src, size_t len);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);

#endif
