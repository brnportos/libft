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

char	*ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    char *join;

    if (!s1)
        return (ft_strdup(s2));
    else if (!s2)
        return (ft_strdup(s1));
    else if (!s1 && !s2)
        return (NULL);
    join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!join)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        join[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
        join[i++] = s2[j++];
    join[i] = '\0';
    return (join);

}

