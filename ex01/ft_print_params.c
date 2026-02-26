#include <stddef.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	size_t	count;

	i = 1;
	while (i < argc)
	{
		count = 0;
		while (argv[i][count])
			count++;
		write(1, argv[i], count);
		write(1, "\n", 1);
		i++;
	}
}
