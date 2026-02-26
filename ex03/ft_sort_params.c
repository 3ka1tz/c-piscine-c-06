#include <stddef.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	size_t	count;

	ft_sort_params(argc, argv);
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
