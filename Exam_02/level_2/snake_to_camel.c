#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

char *snake_to_camel(char *snake)
{
    int i = 0;
    int j = 0;
    while (snake[i])
    {
        if (snake[i] == '_')
        {
            j++;
            if (snake[i + 1] >= 'a' && snake [i + 1] <= 'z')
                snake[i + 1] -= 32;
        }
        i++;
    }
    char *camel = (char *)malloc(sizeof(char) * (i - j + 1));
    if (!camel)
        return (NULL);
    i = 0;
    j = 0;
    while (snake[i])
    {
        if (snake[i] == '_')
            i++;
        camel[j] = snake[i];
        j++;
        i++;
    }
    camel[i] = '\0';
    return (camel);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        char *camel = snake_to_camel(argv[1]);
        ft_putstr(camel);
        free(camel);
    }
    write(1, "\n", 1);
}
