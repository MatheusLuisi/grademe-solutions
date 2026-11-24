#include <unistd.h>

int	main(int argc, char **argv)
{
	int fd;
	int size;
	char letter_e;
	char new_line;

	(void)argc;
	(void)argv;

	fd = 1;
	size = 1;
	letter_e = 'e';
	new_line = '\n';

	write(fd, &letter_e, size);
	write(fd, &new_line, size);
}
