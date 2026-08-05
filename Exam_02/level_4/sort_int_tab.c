#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[] = {5, 2, 8, 2, -1, 10, 0};
	unsigned int	size = 7;
	unsigned int	i;

	printf("before: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

	sort_int_tab(tab, size);

	printf("\nafter:  ");
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
