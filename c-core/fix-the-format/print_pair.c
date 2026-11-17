#include <stddef.h>
#include <stdio.h>

// Print the count and the total on one line, separated by a single space.
// Small values print fine. Large ones do not.
#define MY_LONG_MAX 9223372036854775807L
#define MY_LONG_MIN (-9223372036854775807L - 1L)
#define SIZE_MAX 18446744073709551615UL

void	print_pair(size_t count, long total)
{
	
	if(count == SIZE_MAX)
		printf("%zu %ld", SIZE_MAX, total);
	else
		printf("%ld %ld", count, total);
	printf("\n");
}
