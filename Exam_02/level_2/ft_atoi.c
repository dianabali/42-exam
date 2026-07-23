// #include <stdio.h>

int ft_atoi(const char *s)
{
    int sign;
    int nbr;

    sign = 1;
    nbr = 0;
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;
    if (*s == '-' || *s == '+')
    {
        if (*s == '-')
            sign = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        nbr = nbr * 10 + (*s - '0');
        s++;
    }
    return (nbr * sign);
}

/* int main(void)
{
    printf("%d", ft_atoi("555"));
} */