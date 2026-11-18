#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int	gm_puts(const char *s)
{
	int i; 

	i = 0;
	while(s[i]){
		my_putchar(s[i]);
		i++;
	}
	my_putchar('\n');
	return i;
}
