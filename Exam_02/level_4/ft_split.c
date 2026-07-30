// #include <stdio.h>
#include <stdlib.h>

static char	*ft_strncpy(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

static int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	**ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k = 0;
	int		wc = 0;
	char	**out;

	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (str[i])
			wc++;
		while (str[i] && !is_sep(str[i]))
			i++;
	}

	out = malloc(sizeof(char *) * (wc + 1));
	if (!out)
		return (NULL);

	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		j = i;
		while (str[i] && !is_sep(str[i]))
			i++;
		if (i > j)
		{
			out[k] = malloc(sizeof(char) * (i - j + 1));
			if (!out[k])
				return (NULL);
			ft_strncpy(out[k], &str[j], i - j);
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}

/* int	main(void)
{
	char	*str;
	char	**split;
	int		i;

	str = "Hello\tworld\nthis is ft_split";
	split = ft_split(str);

	i = 0;
	while (split[i])
	{
		printf("word[%d]: %s\n", i, split[i]);
		free(split[i]);
		i++;
	}
	free(split);

	return (0);
} */
