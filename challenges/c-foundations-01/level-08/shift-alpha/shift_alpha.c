
#include <unistd.h>

void    shift_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (str[i] == 'z')
                str[i] = 'a';
            else
                str[i]++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (str[i] == 'Z')
                str[i] = 'A';
            else
                str[i]++;
        }
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "wrong number of arguments\n", 26);
        return (0);
    }
    shift_alpha(argv[1]);
    write(1, "\n", 1);
    return (0);
}

