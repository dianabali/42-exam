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
    int first_word;

    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    i = 0;
    in_word = 0;
    first_word = 1;
    while (argv[1][i])
    {
        if (!is_space(argv[1][i]))
        {
            if (!in_word && !first_word)
                write(1, "   ", 3);
            write(1, &argv[1][i], 1);
            in_word = 1;
            first_word = 0;
        }
        else
            in_word = 0;
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
