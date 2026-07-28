// Search for a str that is in accept.
// Stop at the first char that is not.

// #include <stdio.h>
// #include <string.h>

size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t j;
	while (s[i])
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
			j++;
		if (!accept[j])
			break;
		i++;
	}
	return (i);
}

/* int main(void)
{
	char s[] = "helloworld";
	char accept[] = "h";

	printf("%lu\n", strspn(s, accept));

	printf("%zu", ft_strspn(s, accept));
} */
