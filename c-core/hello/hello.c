#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	int fd;
	int size; 
	char space;
	char letter_H;
	char letter_e;
	char letter_l;
	char letter_o;
	char letter_W;
	char letter_r;
	char letter_d;
	char new_line;
	char exclamation_mark;

	fd = 1;
	size = 1;
	space = ' ';
	letter_H = 'H';
	letter_e = 'e';
	letter_l = 'l';
	letter_o = 'o';
	letter_W = 'W';
	letter_r = 'r';
	letter_d = 'd';
	new_line = '\n';
	exclamation_mark = '!';

	write(fd, &letter_H, size);
	write(fd, &letter_e, size);
	write(fd, &letter_l, size);
	write(fd, &letter_l, size);
	write(fd, &letter_o, size);
	write(fd, &space, size);
	write(fd, &letter_W, size);
	write(fd, &letter_o, size);
	write(fd, &letter_r, size);
	write(fd, &letter_l, size);
	write(fd, &letter_d, size);
	write(fd, &exclamation_mark, size);
	write(fd, &new_line, size);

}