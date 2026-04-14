#include "get_next_line.h"

char    *read_join(int fd, char *tmp)
{
    char    *buf;
    char    *keep_tmp;
    ssize_t     size;

    size = 1;
    if (!tmp)
        tmp = ft_strdup("");
    buf = malloc(BUFFER_SIZE + 1);
    if (!buf)
        return (NULL);
    while (!ft_strchr(tmp, '\n') && size > 0)
    {
        size = read(fd, buf, BUFFER_SIZE)
        if (size == -1)
            return (free(tmp), free(buf), NULL);
        buf[size] = '\0';
        keep_tmp = tmp;
        tmp = ft_strjoin(keep_tmp, tmp);
        free(keep_tmp);
    }
    return (free(buf), tmp);
}
char *get_next_line(int fd)
{
    char    *line;
    static char *tmp;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    tmp = read_join(fd, tmp);
    if (!tmp)
        return (NULL);
}