#include <unistd.h>
#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	word_len(char *str)
{
	int	i = 0;

	while (str[i] && !is_space(str[i]))
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		first_len;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	str = argv[1];
	i = 0;

	// skip leading spaces
	while (is_space(str[i]))
		i++;

	// find length of first word
	first_len = word_len(&str[i]);

	// no word
	if (first_len == 0)
	{
		write(1, "\n", 1);
		return (0);
	}

	// print the rest of the words
	i += first_len;
	while (str[i])
	{
		while (is_space(str[i]))
			i++;
		if (!str[i])
			break;
		write(1, " ", 1);
		while (str[i] && !is_space(str[i]))
		{
			write(1, &str[i], 1);
			i++;
		}
	}

	// print the first word at the end
	write(1, " ", 1);
	i = 0;
	while (is_space(str[i]))
		i++;
	while (i < first_len)
	{
		write(1, &str[i], 1);
		i++;
	}

	write(1, "\n", 1);
	return (0);
}
