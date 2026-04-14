#include "get_next_line"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(char *dest, char *src)
{
    int i;
    char    *dup;
    int len;

    if (!dest || !src)
        return (NULL);
    len = ft_strlen(str);
    i = 0;
    dup = malloc(len + 1)
    if (!dup)
        return (NULL);
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}
