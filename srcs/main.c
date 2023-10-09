#include "regexp.h"
#include <stdlib.h>
#include <stdio.h>

double	ft_atof(const char *nptr);

int	main(int argc, char **argv)
{
	int		i;
	char	**split;

	if (argc != 2)
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	split = ft_split(argv[1], ' ');
	i = 0;
	while (1)
	{
		printf("split[%d]: %s\n", i, split[i]);
		if (!split[i])
			break ;
		i++;
	}
	return (0);
}
