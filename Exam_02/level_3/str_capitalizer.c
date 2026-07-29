#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		new_word;
	char	c;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			new_word = 1;
			while (argv[i][j])
			{
				c = argv[i][j];
				if (c >= 'A' && c <= 'Z')
					c += 32;
				if (new_word && c >= 'a' && c <= 'z')
					c -= 32;
				write(1, &c, 1);
				if (argv[i][j] == ' ' || argv[i][j] == '\t')
					new_word = 1;
				else
					new_word = 0;
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
