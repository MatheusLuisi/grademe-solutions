#include <unistd.h>

// Print n in decimal on standard output, with no newline.
// n is between 0 and INT_MAX.
void my_putchar(char c)
{
	write(1, &c, 1);
}
void	put_number(int n)
{
	long nb;
	nb = n;
	if (nb > 9)
        put_number(nb / 10);
    my_putchar((nb % 10) + '0');
}
