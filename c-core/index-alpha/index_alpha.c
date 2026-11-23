#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int times_to_print(char c)
{
	 
	if(c >= 'a' && c <= 'z')
		return (c - 'a');
	if(c >= 'A' && c <= 'Z')
		 return (c - 'A');
	return 1;
}

void print_n_times(int times, char c)
{
	while(times > 0){
		my_putchar(c);
		times--;
	}
}

int	main(int argc, char **argv)
{
	int i;
	if (argc != 2){
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	i = 0;
	while(argv[1][i])
	{
		print_n_times(times_to_print(argv[1][i]), argv[1][i]);
		i++;
	}
	my_putchar('\n');
	return (0);
}

