#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(long n)
{
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n > 9)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

void do_op(int a, int b, char op)
{
    if (op == '+')
        ft_putnbr(a + b);
    else if (op == '-')
        ft_putnbr(a - b);
    else if (op == '*')
        ft_putnbr(a * b);
    else if (op == '/')
        ft_putnbr(a / b);
    else if (op == '%')
        ft_putnbr(a % b);
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[3]);
        char op = argv[2][0];
        do_op(a, b, op);
    }
    write(1, "\n", 1);
}