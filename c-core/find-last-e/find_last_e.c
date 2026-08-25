#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc != 2)
		write(1, "e", 1);
	else if(argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] == 'e'){
				write(1, "e", 1);
				break;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
