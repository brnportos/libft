#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = open("README.md", O_RDONLY);
    char    *gnl = get_next_line(fd);

    while (gnl != NULL)
    {
        printf("%s", gnl);
        free(gnl);
        gnl = NULL;
        gnl = get_next_line(fd);
    }
    close(fd);
}
