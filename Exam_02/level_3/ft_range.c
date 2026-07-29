#include <stdlib.h>
// #include <stdio.h>

int *ft_range(int start, int end)
{
    int *arr;
    int size;
    int i;

    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;
    arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
        return (NULL);
    i = 0;
    while (i < size)
    {
        arr[i] = start;
        if (start < end)
            start++;
        else if (start > end)
            start--;
        i++;
    }
    return (arr);
}

/* int main(void)
{
    int start = 0;
    int end = -3;
    int *arr;
    int size;
    int i;

    arr = ft_range(start, end);

    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;

    i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    free(arr);
    return (0);
} */
