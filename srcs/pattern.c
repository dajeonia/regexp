int	ft_check(char *s, char *pattern)
{
	int	i;
	int	len;

	i = 0;
	len = ft_check("[0-9]");
	if (len < 1)
		return (0);
	i += len;
	len = ft_check("(,0x[0-9a-f]{8})*");
}

int	ft_check(const char *s, t_ptn *ptn)
{
	int	check;

	i = 0;
	while (ft_isin(s[i], ptn->set))
		i++;
	if (ptn->min <= i && i <= ptn->max)
	{
		ptn->len = check;
		return (1);
	}
	return (0);
}

typedef struct	s_ptn
{
	unsigned int	min;
	unsigned int	max;
	char			*set;
	int				len;
}	t_ptn;

int	ft_check(char *pattern)
{
	
}



int	ft_strncmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] - s2[i] == 0)
		{
			if (s1[i] == '\0')
				break ;
			i++;
		}
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

int	check_eq(const char *check, const char *pattern)
{
	
}

int	check_pattern_list(const char *check, t_list *ptn)
{
	int	i;

	i = 0;
	while (ptn)
	{
		i = check_pattern_node(check, i, ptn->content);
		ptn = ptn->next;
	}
}

int	check_pattern_node(const char *check, int start, t_ptn *pat)
{
	int	rep;

	rep = 0;
	while (check[start])
	{
		if (ft_isin(check[start], pat->pattern))
			rep++;
		else
			break ;
	}
}

int	

int	check_in(const char *check, const char *pattern)
{
	int	i;

	i = 0;
	while (check[i])
	{
		if (check_eq(&check[i], pattern))
			return (1);
		i++;
	}
	return (0);
}

int	pattern_check(const char *check, const char *pattern)
{
	while (*check)
	{
		
	}
}

int	check_str(const char *check, const char *pattern, const char *set)
{
	int	len;

	len = ft_toklen(check, set);
}

int	check_ptn(const char *check, const char *pattern)
{
	int	i;

	i = 0;
	while (check[i])
	{
		check[i] = pattern
		i++;
	}
}

int	check_pattern(const char *check, char *pattern, int min, int max)
{
	int	size;

	size = 0;
	while (check[size])
	{
		if (!ft_isin(check[size++], pattern))
			break ;
	}
	if (min <= size && size <= max)
		return (size);
	else
		return (-1);
}
