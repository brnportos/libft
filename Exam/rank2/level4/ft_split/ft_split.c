#include <stdlib.h>
#include <unistd.h>

int	is_separate(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
int	count_world(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (!is_separate(str[i]) && (is_separate(str[i + 1]) || str[i +1] == '\0'))
			word++;
		i++;
	}
	return (word);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] && !is_separate(str[i]))
		i++;
	return (i);
}

char	*word_dup(char *str)
{
	char	*dup;
	int	i = 0;
	int	len = ft_strlen(str);

	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	while(str[i] && !is_separate(str[i]))
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char    **ft_split(char *str)
{
	char	**split;
	int	j;

	j = 0;
	split = malloc((sizeof(char *)) * (count_world(str) + 1));
	if(!split)
		return (NULL);
	while (*str)
	{
		while (*str && is_separate(*str))
			str++;
		if (*str)
			split[j++] = word_dup(str);
		while (*str && !is_separate(*str))
			str++;
	}
	split[j] = NULL;
	return (split);
}

#include <stdio.h>

int	main()
{
	char **str = ft_split("Hello world 42");
	int	i;

	i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}
