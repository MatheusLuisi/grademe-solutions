#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void	put_number(int nb)
{
	if (nb > 9)
        put_number(nb / 10);
    my_putchar((nb % 10) + '0');
}

int	main(int argc, char **argv)
{
    (void)argv;
    argc -=1;
    put_number(argc);
    my_putchar('\n');
}
