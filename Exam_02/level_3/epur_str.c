#include <unistd.h>

int is_space(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int in_word;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    in_word = 0;
    while (argv[1][i])
    {
        if (!is_space(argv[1][i]))
        {
            if (!in_word)
            {
                if (i != 0)
                    write(1, " ", 1);
                in_word = 1;
            }
            write(1, &argv[1][i], 1);
        }
        else
            in_word = 0;
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
