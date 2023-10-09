int	parse_number(const char *s)
{
	int	i;

	i = 0;
	while (ft_isin(s[i], "0123456789"))
		i++;
	return (i);
}

int	parse_vector(double vector[3], const char *s, int size)
{
	int	i;
	int	size;

	i = 0;
	len = ft_number(s[i], "0123456789");
	if (len <= 0)
		return (-1);
	vector;
	len = ft_isin(s[i], ",");
	if (len <= 0)
		return (-1);
	i++;
		else
	}
}

int	parse_normal(const char *s)
{
	int	i;
	int	len;
	
	while (i < 
	len = parse_number(&s[i]);
}

double	ft_check_normal(const char *nptr)
{
	double	normal;

	if (ft_check_double(nptr, -1.0, 1.0))
		normal ;
}

int	ft_check_double(const char *nptr, double min, double max)
{
	double	get;

	get = ft_atof(s);
	if (min <= get && get <= max)
		return (1);
	return (0);
}
