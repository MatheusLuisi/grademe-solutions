
#include <unistd.h>

int my_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

void print_str(char *s)
{
    int i;

    i = 0;
    while (s[i]){
        write(1, &s[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    if (argc != 4){
        write(1, "wrong number of arguments\n", 26);
        return (0);
    }

    i = my_strlen(argv[1]) - 1;
    if (my_strlen(argv[2]) > 1 || my_strlen(argv[3]) > 1){
        write(1, "\n", 1);
        return (0);
    }

    while (i >= 0)
    {
        if (argv[1][i] == argv[2][0]){
            argv[1][i] = argv[3][0];
            break;
        }
        i--;
    }
    print_str(argv[1]);
    write(1, "\n", 1);
    return (0);
}
