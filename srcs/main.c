#include "regexp.h"
#include <stdlib.h>
#include <stdio.h>

double	ft_atof(const char *nptr);
int		ft_parse_rgb(int rgb[3], const char *nptr, int min, int max);
int		ft_print_rgb(int rgb[3]);

int	main(int argc, char **argv)
{
	int		rgb[3];

	if (argc != 2)
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	if (ft_parse_rgb(rgb, argv[1], 0, 255) < 0)
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	ft_print_rgb(rgb);
	return (0);
}

int	ft_print_spt(const char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		printf("split[%d]: %s\n", i, split[i]);
		i++;
	}
	return (0);
}
