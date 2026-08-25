#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int last = argc - 1;
	if(argc > 1)
	{
		while(argv[last][i])
		{
			write(1, &argv[last][i], 1);
			i++;
		}
	}
	else
		write(1, "wrong number of arguments", 25);
	write(1, "\n", 1);
}
