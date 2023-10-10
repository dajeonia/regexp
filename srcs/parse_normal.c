int	ft_parse_vector(double vector[3], const char *nptr, double min, double max);

int	ft_parse_normal(double normal[3], const char *args)
{
	return (ft_parse_vector(normal, args, -1.0, 1.0));
}
