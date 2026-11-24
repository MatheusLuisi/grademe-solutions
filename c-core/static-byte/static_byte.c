#include <unistd.h>

int	main(void)
{
	int i; 
	char *str;

	i = 0;
	str = "e\n";
	while(str[i])
		i++;
	write(1, str, i);
}
