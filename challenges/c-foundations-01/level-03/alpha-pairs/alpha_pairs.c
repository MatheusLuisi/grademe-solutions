#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int i = 1;
	char c = 'a';
	while(i < 27)
	{
		if(i % 2 == 0){
			my_putchar(c - 32);
			my_putchar(c - 32);
		}
		else{
			my_putchar(c);
			my_putchar(c);
		}
		i++;
		c++;
	}
	my_putchar('\n');
}