#include <unistd.h>

int	my_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int num = 0;

	if(str[i] == '-'){
		sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9'){
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putnbr(int n)
{
	long int	nb;
	nb = n;
	if (nb < 0){
		my_putchar('-');
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		my_putchar(nb + '0');
	if (nb > 9){
		my_putnbr(nb / 10);
		my_putnbr(nb % 10);
	}
}

int	main(int argc, char **argv)
{
	int sum; 
	int size;

	sum = 0;
	if (argc == 0){
		my_putchar('0');
		my_putchar('\n');
		return 0; 
	}
	size = argc - 1;
	while(size > 0){
		sum += my_atoi(argv[size]);
		size--;
	}
	my_putnbr(sum);
	my_putchar('\n');
}
