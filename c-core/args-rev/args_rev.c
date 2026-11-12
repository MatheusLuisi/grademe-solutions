#include <unistd.h>

void pchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	int args = argc - 1;
	if(args >= 1)
	{
		while(args >= 1)
		{
			i = 0;
			while(argv[args][i])
			{
				pchar(argv[args][i]);
				i++;	
			}
			pchar('\n');
			args--;
		}
	}
	return (0);
}
