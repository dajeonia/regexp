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
