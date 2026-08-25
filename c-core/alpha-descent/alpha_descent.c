#include <unistd.h>

int	main(void)
{
	int i = 0;
	char c = 'Z';
	
	while(i <= 12)
	{
		if(!(i % 2 == 0))
			c += 32;
		write(1, &c, 1);
		c--;
		write(1, &c, 1);
		c--;
		if(!(i % 2 == 0))
			c -= 32;
		i++;
	}
	write(1, "\n", 1);
}
