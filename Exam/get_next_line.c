#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
//stdio is not needed, just let him for test with main
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	*ret = malloc(9999);
	char	c;
	int		i = 0;
	int		cpt = 0;

	if (fd < 0)
		return (NULL);
	while ((cpt = read(fd, &c, 1)) > 0)
	{
		ret[i] = c;
		i++;
		if (c == '\n')
			break ;
	}
	if (i == 0 || cpt < 0)
	{
		free(ret);
		return (NULL);
	}
	ret[i] = '\0';
	return (ret);
}

#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	// 1. Give yourself enough space, but check if malloc fails
	char	*ret = malloc(10000);
	char	c;
	int		i = 0;
	int		cpt = 0;

	if (fd < 0 || !ret)
		return (NULL);

	// 2. Read character by character
	while ((cpt = read(fd, &c, 1)) > 0)
	{
		ret[i++] = c;
		if (c == '\n')
			break ;
	}

	// 3. Handle EOF or Read Error
	if (cpt < 0 || i == 0)
	{
		free(ret);
		return (NULL);
	}

	// 4. Null-terminate the string
	ret[i] = '\0';
	return (ret);
}

// Main is here only for testing, do not let him in exam
int		main(int argc, char **argv)
{
	int 	fd = 0;
	char	*line;

	if (argc > 1)
		fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("line |%s", line);
		free(line);
		line = get_next_line(fd);
	}
	return (0);
}
