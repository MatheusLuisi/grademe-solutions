#include <stdlib.h>
#include <unistd.h>

void print_line(int length)
{
	while(length > 0){
		write(1, "#", 1);
		length--;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int i = 0;
	if(argc < 2){
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	while(++i < argc)
		print_line(atoi(argv[i]));
	return (0);
}
