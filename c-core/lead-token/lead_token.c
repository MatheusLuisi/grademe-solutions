#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	if(argc != 2){
		write(1, "wrong number of arguments\n", 26);
		return 0;
	}
	i = 0;
	while(argv[1][i]){
		if((argv[1][i] >= '\t' && argv[1][i] <= '\r') || (argv[1][i] == ' '))
			i++;
		else{
			write(1, &argv[1][i], 1);
			i++;
			if(argv[1][i] == ' '){
				break;
			}
		}
	}
	write(1, "\n", 1);
}
