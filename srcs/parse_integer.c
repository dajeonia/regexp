#include "regexp.h"

int		ft_check_arg_int(const char *nptr, int size);
int		ft_sizeint(const char *nptr);
int		ft_sptsize(char **spt);
void	ft_sptdel(char **spt);
int		ft_range(int nbr, int min, int max);

#include <stdio.h>

int	ft_print_rgb(int rgb[3])
{
	int	i;

	i = 0;
	while (i < 3)
	{
		printf("rgb[%d]: %d\n", i, rgb[i]);
		i++;
	}
	return (0);
}

int	ft_parse_rgb(int rgb[3], const char *nptr, int min, int max)
{
	char	**split;
	int		i;

	if (ft_check_arg_int(nptr, 3) == 0)
		return (-1);
	split = ft_split(nptr, ',');
	if (split == NULL)
		return (-1);
	i = 0;
	while (i < 3)
	{
		// overflowcheck
		rgb[i] = ft_atoi(split[i]);
		if (ft_range(rgb[i], min, max) == 0)
		{
			ft_sptdel(split);
			return (-1);
		}
		i++;
	}
	ft_sptdel(split);
	return (0);
}

int	ft_check_arg_int(const char *nptr, int size)
{
	int	ret;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j++ < size)
	{
		ret = ft_sizeint(nptr + i);
		if (ret == 0)
			return (0);
		i += ret;
		if (nptr[i] != ',')
			break ;
		i++;
	}
	if (j != size)
		return (0);
	return (i);
}

int	ft_sizeint(const char *nptr)
{
	int	i;
	int	j;

	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	j = 0;
	while (ft_isdigit(nptr[i + j]))
		j++;
	if (j == 0)
		return (0);
	i += j;
	return (i);
}
