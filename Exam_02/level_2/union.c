#include <unistd.h>

int is_seen(char *str, char c)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    char printed[256];

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    i = 0;
    j = 0;
    while (argv[1][i])
    {
        if (!is_seen(printed, argv[1][i]))
        {
            printed[j] = argv[1][i];
            j++;
            printed[j] = '\0';
            write(1, &argv[1][i], 1);
        }
        i++;
    }

    i = 0;
    while (argv[2][i])
    {
        if (!is_seen(printed, argv[2][i]))
        {
            printed[j] = argv[2][i];
            j++;
            printed[j] = '\0';
            write(1, &argv[2][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
