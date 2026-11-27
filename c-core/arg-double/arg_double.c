#include <unistd.h>
void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		my_putchar(nb + '0');
	if (nb > 9){
		my_putnbr(nb / 10);
		my_putnbr(nb % 10);
	}
}

int	main(int argc, char **argv)
{
	int i;
	int sum;
	if(argc != 2){
		write(1, "wrong number of arguments\n", 26);
		return 0; 
	}
	i = 0;
	sum = 0;
	while (argv[1][i] >= '0' && argv[1][i]  <= '9'){
		sum = sum * 10 + (argv[1][i]  - '0');
		i++;
	}
	my_putnbr(sum * 2);
	my_putchar('\n');
}
