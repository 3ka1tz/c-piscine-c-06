#include <stddef.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	size_t	count;

	(void)argc;
	count = 0;
	while (argv[0][count])
		count++;
	write(1, argv[0], count);
	write(1, "\n", 1);
}
