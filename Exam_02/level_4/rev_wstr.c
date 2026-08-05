#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

void print_word(char *str, int start, int end)
{
	while (start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int end;
	int first;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		first = 1;

		while (i >= 0)
		{
			while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i--;

			if (i < 0)
				break;

			end = i + 1;

			while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;

			if (!first)
				write(1, " ", 1);

			print_word(argv[1], i + 1, end);
			first = 0;
		}
	}

	write(1, "\n", 1);
	return (0);
}
