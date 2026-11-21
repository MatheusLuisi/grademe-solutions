#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int i = 0;
	char c = 'a';
	while(i++ < 26)
	{
		if(i % 2 == 0){
			my_putchar(c - 32);
			my_putchar(c - 32);
		}
		else{
			my_putchar(c);
			my_putchar(c);
		}
		c++;
	}
	my_putchar('\n');
}
