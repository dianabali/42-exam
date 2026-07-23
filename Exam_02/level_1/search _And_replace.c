#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    if (argc == 4)
    {
        i = 0;
        while (argv[1][i])
        {
            if (argv[2][i] != argv[1][i])
                write(1, &argv[1][i]);
            else
                argv[1][i] = argv[3][i];
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}