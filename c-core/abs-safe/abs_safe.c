// Return the absolute value of n as a long.
// Every int is a valid n, INT_MIN included.
long	abs_safe(int n)
{
	long nb = n;
	if (n < 0)
		return nb * -1;
	return nb;
}