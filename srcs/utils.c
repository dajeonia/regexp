#include <stdlib.h>
#include "regexp.h"

int	ft_sptsize(char **spt)
{
	int	size;

	size = 0;
	while (spt[size])
		size++;
	return (size);
}

void	ft_sptdel(char **spt)
{
	int	i;

	i = 0;
	while (spt[i])
	{
		free(spt[i]);
		i++;
	}
	free(spt);
}

int	ft_range(int nbr, int min, int max)
{
	if (min <= nbr && nbr <= max)
		return (1);
	return (0);
}

int	ft_range_float(double nbr, double min, double max)
{
	if (min <= nbr && nbr <= max)
		return (1);
	return (0);
}
