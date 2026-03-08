#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

typedef struct s_node
{
    void            *content;
    struct s_node   *next;
    struct s_node   *prev;
}                   t_node;

int	ft_isalpha(int alpha);
int     ft_isdigit(int digit);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int	ft_isprint(int c);
void    *ft_memset(void *dest, int value, size_t len);
void    ft_bzero(void *buffer, size_t len);
void    *ft_memcpy(void *dest, const void *src, size_t len);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *s);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const char *nptr);
char    *ft_strdup(const char *s);
void    *ft_calloc(size_t nmemb, size_t size);

char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));

t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
void    sort_single_linked_lst(t_list **root);

void    free_doubly_lst(t_node **tail, t_node **head);

#endif
