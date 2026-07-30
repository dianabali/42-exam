#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n;
	int	i;
	int	first;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		else
		{
			i = 2;
			first = 1;
			while (n > 1)
			{
				if (n % i == 0)
				{
					if (!first)
						printf("*");
					printf("%d", i);
					n /= i;
					first = 0;
				}
				else
					i++;
			}
		}
	}
	printf("\n");
	return (0);
}
