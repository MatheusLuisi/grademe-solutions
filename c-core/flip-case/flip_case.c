#include <unistd.h>

void my_putchar(char c)
{ 
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	if (argc != 2){
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	i = 0;
	while (argv[1][i]){
		if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			my_putchar(argv[1][i] - 32);
		else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z') 
			my_putchar(argv[1][i] + 32);
		else
			my_putchar(argv[1][i]);
		i++;
	}
	my_putchar('\n');
}
