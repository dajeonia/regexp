int	ft_regexp_base(const char *s, const char *set, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (ft_isin(s[i], set))
		{
			len += 1;
			if (len == max)
				return (en);
		}
		else
			break ;
		i++;
	}
	if (min <= len && len <= max)
		return (len);
	return (-1);
}
