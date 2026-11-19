#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

void print_n(int n, char c)
{
	for(int i = 0; i < n; i++)
		my_putchar(c);
}

int	main(int argc, char **argv)
{
	int height;
	int blocks;

	if (argc != 2){
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	height = atoi(argv[1]);
	blocks = 1;
	while(height > 0){
		print_n(height - 1, ' ');
		print_n(blocks, '#');
		my_putchar('\n');
		height--;
		blocks += 2;
	}
	return 0;
}
