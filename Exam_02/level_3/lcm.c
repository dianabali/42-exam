// #include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int x;
    unsigned int y;
    unsigned int temp;

    if (a == 0 || b == 0)
        return (0);
    x = a;
    y = b;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    return ((a * b) / x);
}

/* int main(void)
{
    printf("%u", lcm(6, 8));
    return (0);
} */
