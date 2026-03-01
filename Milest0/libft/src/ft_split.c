#include "../include/libft.h"

static int word_count(const char *s, char c)
{
    int word;
    int i;

    word = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            word++;
        i++;
    }
    return (word);
}

static int ft_strln(const char *s, char c)
{
    int len;

    len = 0;
    while (s[len] && s[len] != c)
        len++;
    return (len);
}

static char    **ft_free(char **split, int len)
{
    if (!split)
        return (NULL);
    while (len-- >= 0)
        free(split[len]);
    free(split);
    split = NULL;
    return (NULL);
}

static char *word_dup(const char *s, int len)
{
    char    *dup;
    int     i;

    i = 0;
    if (!s)
        return (NULL);
    dup = malloc(len + 1);
    if (!dup)
        return (NULL);
    while (i < len)
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';;
    return (dup);
}

char    **ft_split(char const *s, char c)
{
    int     i;
    int     len;
    char    **split;

    i = 0;
    if (!s)
        return (NULL);
    split = malloc(sizeof(char *) * word_count(s, c) + 1);
    if (!split)
        return (NULL);
    while (*s)
    {
        while (*s && *s == c)
            s++;
        len = ft_strln(s, c);
        if (*s)
            split[i++] = word_dup(s, len);
        if (!split)
            return (ft_free(split, i));
        while (*s && *s != c)
            s++;
    }
    split[i] = NULL;
    return (split);
}



