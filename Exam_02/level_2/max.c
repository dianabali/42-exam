// #include <stdio.h>

int max(int *tab, int len)
{
    int i = 1;
    int max_value = tab[0];

    if (len == 0)
        return (0);
    while (i < len)
    {
        if (tab[i] > max_value)
            max_value = tab[i];
        i++;
    }
    return (max_value);
}

/* int main(void)
{
    int nums[] = {10, 2, 3, 4};
    printf("%d", max(nums, 4));
} */
