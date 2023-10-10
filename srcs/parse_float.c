#include "regexp.h"

int	ft_check_arg_float(const char *nptr, int size);
int	ft_sizefloat(const char *nptr);
int	ft_range_float(double nbr, double min, double max);

#include <stdio.h>

int	ft_vector_print(double vector[3])
{
	int	i;

	i = 0;
	while (i < 3)
	{
		printf("vector[%d]: %d\n", i, vector[i]);
		i++;
	}
	return (0);
}

int	ft_parse_vector(double vector[3], const char *args, double min, double max)
{
	char	**split;
	int		i;

	if (ft_check_arg_float(args, 3) == 0)
		return (-1);
	split = ft_split(args, ',');
	if (split == NULL)
		return (-1);
	i = 0;
	while (i < 3)
	{
		// overflowcheck
		vector[i] = ft_atof(split[i]);
		if (ft_range_float(vector[i], min, max) == 0)
		{
			ft_sptdel(split);
			return (-1);
		}
		i++;
	}
	ft_sptdel(split);
	return (0);
}

int	ft_check_arg_float(const char *nptr, int size)
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

int	ft_sizefloat(const char *nptr)
{
	int	i;
	int	j;

	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i + j]))
		j++;
	if (j == 0)
		return (0);
	i += j;
	j = 0;
	if (nptr[i] == '.')
	{
		i++;
		while (ft_isdigit(nptr[i + j]))
			j++;
		if (j == 0)
			return (0);
		i += j;
	}	
	return (i);
}
