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