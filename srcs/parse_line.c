
t_rt	*ft_parse_line(t_vars *vars, const char *line)
{
	char	*split;
	int		i;

	split = ft_split(line, ' ');
	if (split == NULL)
		return (NULL);
	if (ft_strcmp(split[0], "rt"))
}

int	ft_check_type(t_vars *vars, const char **split)
{
	int	ret;

	if (ft_strupper(type))
		ret = ft_setenv(vars, split);
	else if (ft_strlower(type))
		ret = ft_setobj(vars, split);
	else
		return (-1);
	return (ret);
}

int	ft_setenv(t_vars *vars, const char **split)
{
	int	ret;

	if (ft_strncmp(type, "C", 2))
		;
	else if (ft_strncmp(type, "R", 2))
		;
	else if (ft_strncmp(type, "L", 2))
		;
	else
		return (-1);
	return (ret);
}

int	ft_setobj(t_vars *vars, const char **split)
{
	int	ret;

	if (ft_strncmp(type, "sp", 3) == 0)
		ret = ft_spnew();
	else if (ft_strncmp(type, "cy", 3) == 0)
		ret = ft_cynew();
	else if (ft_strncmp(type, "pl", 3) == 0)
		;
	else
		return (-1);
	return (ret);
}
