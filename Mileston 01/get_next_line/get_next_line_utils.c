#include "get_next_line"

char *ft_strdup(char *dest, char *src)
{
    int i;
    char    *dup;
    int len;

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