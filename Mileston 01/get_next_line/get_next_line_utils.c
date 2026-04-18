#include "get_next_line"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  src_len;

    if (size == 0)
        return (src_len);
    i = 0;
    src_len = ft_strlen(src);
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\n';
    return (src_len);
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
char	*ft_strchr(const char *s, int c)
{

    while (*s != (char)c)
    {
        if (*s == '\0')
            return (NULL);
        s++;
    }
    return ((char *)s);
}

