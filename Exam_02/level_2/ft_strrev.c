// #include <stdio.h>

char *ft_strrev(char *str)
{
    int start = 0;
    int end = 0;
    char temp;

    while (str[end])
        end++;
    end--;

	while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return (str);
}

/* int main(void)
{
	char str[] = "hello";
	printf("%s", ft_strrev(str));
} */
