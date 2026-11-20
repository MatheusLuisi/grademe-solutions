int	digit_count(int n)
{
	int count = 1;
	long nb = n;
	if (n < 0)
		nb *= -1;
	while(nb > 9){
		nb /= 10;
		count++;
	}
	return count;
}
