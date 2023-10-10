int	ft_islower(int c);
int	ft_isupper(int c);

int	ft_strlower(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_islower(s[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_strupper(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isupper(s[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
