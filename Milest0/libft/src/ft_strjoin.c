#include "../include/libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *join;
    int     i;
    int     j;
    
    if (!s1 && !s2)
        return (NULL);
    if (!s2)
        return (ft_strdup(s1));
    if (!s1)
        return (ft_strdup(s2));
    join = malloc(sizeof * join * (ft_strlen(s1) + ft_strlen(s2)) + 1);
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


