int	ft_chknstr(char *check, char *s, size_t n, size_t m)
{
	size_t	i;
	size_t	len;
	size_t	chk;

	i = 0;
	while (check[len])
	{
		chk = ft_chkstr(&check[len], s);
		if (chk == 0)
			break ;
		len += chk;
		i++;
	}
	if ((n <= i && i <= m))
		return (0);
	return (len);
}

int	ft_chkstr(char *check, char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		if (check[len] != s[len])
			return (0);
		len++;
	}
	return (len);
}

int	ft_chknset(char *check, char *set, int n, int m)
{
	size_t	i;

	i = 0;
	while (check[i])
	{
		if (ft_chkset(check[i], set))
			break ;
		i++;
	}
	if (!(n <= i && i <= m))
		return (0);
	return (i);
}

int	ft_chkset(char check, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == check)
			return (1);
		i++;
	}
	return (0);
}
