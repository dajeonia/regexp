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
