#include <unistd.h>
void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putnbr(int n)
{
    if (n > 9)
        my_putnbr(n / 10);
    my_putchar((n % 10) + '0');
}

int	main(void)
{
	int count;

	count = 1;
	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
			write(1, "FizzBuzz", 8);
		else if (count % 3 == 0)
			write(1, "Fizz", 4);
		else if (count % 5 == 0)
			write(1, "Buzz", 4);
		else
			my_putnbr(count);
		my_putchar('\n');
		count++;
	}	
}
