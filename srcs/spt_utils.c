#include <stdlib.h>

int	ft_sptsize(char **spt)
{
	int	size;

	size = 0;
	while (spt[size])
		size++;
	return (size);
}

int	ft_sptdel(char **spt)
{
	int	i;

	i = 0;
	while (spt[i])
	{
		free(spt[i]);
		i++;
	}
	free(spt);
	return (0);
}
