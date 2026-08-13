#include <stdlib.h>
#include <unistd.h>

// argv[1] is the width, argv[2] the height. Draw the frame of that rectangle:
// '+' corners, '-' on top and bottom, '|' on the sides, spaces inside.
int	main(int argc, char **argv)
{
	int i;
	int j;
	int width;
	int height;

	if(argc == 3)
	{
		i = 0;
		width = atoi(argv[1]);
		height = atoi(argv[2]);

		if (width <= 0 || height <= 0)
            return (0);
		while(i < height)
		{
			j = 0;
			while(j < width)
			{
				if ((j == 0 || j == width - 1) && (i == 0 || i == height - 1))
					write(1, "+", 1);
				else if(i == 0 || i == height - 1)
					write(1, "-", 1);
				else if(j == 0 || j == width - 1)
					write(1, "|", 1);
				else
					write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "wrong number of arguments\n", 26);
	return 0;
}






