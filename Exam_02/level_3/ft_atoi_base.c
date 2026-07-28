// #include <stdio.h>

int get_digit(char c)
{
    if (c >= '0' && c <= '9')
        return (c - '0');
    if (c >= 'a' && c <= 'f')
        return (c -'a' + 10);
    if (c >= 'A' && c <= 'F')
        return (c - 'A' + 10);
    return (-1);
}

int ft_atoi_base(char *str, int str_base)
{
    int i;
    int sign;
    int digit;
    int result;

    if (str_base < 2 || str_base > 16)
        return (0);
    i = 0;
    sign = 1;
    result = 0;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i])
    {
        digit = get_digit(str[i]);
        if (digit < 0 || digit >= str_base)
            break ;
        result = result * str_base + digit;
        i++;
    }
    return (result * sign);
}

/* int main(void)
{
    printf("%d\n", ft_atoi_base("a", 16));
    printf("%d\n", ft_atoi_base("1010", 2));
    printf("%d", ft_atoi_base("100", 8));
} */
