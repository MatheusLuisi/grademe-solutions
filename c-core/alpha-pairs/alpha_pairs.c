#include <unistd.h>

int	main(void)
{
	int i = 1;
	char c = 'a';

	while(i <= 26)
	{
		if(i % 2 == 0)
		 	c -= 32;
		write(1, &c, 1);
		write(1, &c, 1);
		if(i % 2 == 0)
		 	c += 32;
		c++;
		i++;
	}
	write(1, "\n", 1);
}
