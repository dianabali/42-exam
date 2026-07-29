#include <unistd.h>

int	is_letter(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				c = argv[i][j];
				if (c >= 'A' && c <= 'Z')
					c += 32;
				if (is_letter(c) && !is_letter(argv[i][j + 1]))
					c -= 32;
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
