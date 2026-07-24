#include <unistd.h>

// prevents duplicates
int	already_printed(char c, char *printed)
{
	int	i;

	i = 0;
	while (printed[i])
	{
		if (printed[i] == c)
			return (1);
		i++;
	}
	return (0);
}


// check if a character exists in a string
int	in_second(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	printed[256];

	i = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (in_second(argv[1][i], argv[2])
				&& !already_printed(argv[1][i], printed))
			{
				write(1, &argv[1][i], 1);
				printed[k] = argv[1][i];
				k++;
				printed[k] = '\0';
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
