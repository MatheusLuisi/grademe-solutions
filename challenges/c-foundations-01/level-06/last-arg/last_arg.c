#include <unistd.h>

int my_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "wrong number of arguments", 25);
	else if (argc > 1)
		write(1, argv[argc - 1], my_strlen(argv[argc - 1]));
	write(1, "\n", 1);
	return 0;
}
