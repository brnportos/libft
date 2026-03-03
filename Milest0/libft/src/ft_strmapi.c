#include "../include/libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *strmapi;
    int     i;
    size_t  len;

    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    strmapi = malloc(len + 1);
    if (!strmapi)
        return (NULL);
    i = 0;
    while (i < len)
    {
        strmapi[i] = f(i, s[i]);
        i++;
    }
    strmapi[i] = '\0';
    return (strmapi);
}

/*char ff(unsigned int i, char c)
{
    return (c + i);
}
#include <stdio.h>

int main()
{
    printf("%s\n", (char *)ft_strmapi("azc", ff));
}*/
