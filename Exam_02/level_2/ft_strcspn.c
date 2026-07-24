// Search for a str that is not in reject.
// Stop at the first char that is.

// #include <stdio.h>
#include <string.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

/* int main(void)
{
	char s[] = "helloworld";
	char reject[] = "a";

	printf("%lu\n", strcspn(s, reject));

	printf("%lu", ft_strcspn(s, reject));
} */
