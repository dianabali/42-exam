#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    { 
        int i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] == 'a')
                write(1, "a", 1);
            else if (argv[1][i] == 'b')
                write(1, "bb", 2);
            else if (argv[1][i] == 'c')
                write(1, "ccc", 3);
            else if (argv[1][i] == 'd')
                write(1, "dddd", 4);
            else if (argv[1][i] == 'e')
                write(1, "eeeee", 5);
            else if (argv[1][i] == 'f')
                write(1, "ffffff", 6);
            else if (argv[1][i] == 'g')
                write(1, "ggggggg", 7);
            else if (argv[1][i] == 'h')
                write(1, "hhhhhhhh", 8);
            else if (argv[1][i] == 'i')
                write(1, "iiiiiiiii", 9);
            else if (argv[1][i] == 'j')
                write(1, "jjjjjjjjjj", 10);
            else if (argv[1][i] == 'k')
                write(1, "kkkkkkkkkkk", 11);
            else if (argv[1][i] == 'l')
                write(1, "llllllllllll", 12);
            else if (argv[1][i] == 'm')
                write(1, "mmmmmmmmmmmmm", 13);
            else if (argv[1][i] == 'n')
                write(1, "nnnnnnnnnnnnnn", 14);
            else if (argv[1][i] == 'o')
                write(1, "ooooooooooooooo", 15);
            else if (argv[1][i] == 'p')
                write(1, "pppppppppppppppp", 16);
            else if (argv[1][i] == 'q')
                write(1, "qqqqqqqqqqqqqqqqq", 17);
            else if (argv[1][i] == 'r')
                write(1, "rrrrrrrrrrrrrrrrrr", 18);
            else if (argv[1][i] == 's')
                write(1, "sssssssssssssssssss", 19);
            else if (argv[1][i] == 't')
                write(1, "tttttttttttttttttttt", 20);
            else if (argv[1][i] == 'u')
                write(1, "uuuuuuuuuuuuuuuuuuuuu", 21);
            else if (argv[1][i] == 'v')
                write(1, "vvvvvvvvvvvvvvvvvvvvvv", 22);
            else if (argv[1][i] == 'w')
                write(1, "wwwwwwwwwwwwwwwwwwwwwww", 23);
            else if (argv[1][i] == 'x')
                write(1, "xxxxxxxxxxxxxxxxxxxxxxxx", 24);
            else if (argv[1][i] == 'y')
                write(1, "yyyyyyyyyyyyyyyyyyyyyyyyy", 25);
            else if (argv[1][i] == 'z')
                write(1, "zzzzzzzzzzzzzzzzzzzzzzzzzz", 26);
            i++;
        }
    }
    write(1, "\n", 1);
}
