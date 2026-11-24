#include <unistd.h>

int	main(void)
{
	char c = 'e';
	write(1, &c, 1);
	c = '\n';
	write(1, &c, 1);
}
