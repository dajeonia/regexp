char	*ft_strntok(const char *s, const char *set, int n)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (i < n)
	{
		j += ft_duplen(&s[j], set);
		j += ft_toklen(&s[j], set);
		i++;
	}
	return (ft_strtok(&s[j], set));
}

char	*ft_strtok(const char *s, const char *set)
{
	int		start;
	int		end;
	char	*tok;

	start = ft_duplen(s, set);
	end = start + ft_toklen(&s[start], set);
	if (end - start == 0)
		return (NULL);
	tok = ft_substr(s, start, end);
	return (tok);
}

int	ft_toklen(const char *s, const char *set)
{
	int	len;

	len = 0;
	while (*s)
	{
		if (ft_isin(*s, set) == 0)
		{
			s++;
			len++;
		}
		else
			break ;
	}
	return (len);
}

int	ft_duplen(const char *s, const char *set)
{
	int	len;

	len = 0;
	while (*s)
	{
		if (ft_isin(*s, set))
		{
			s++;
			len++;
		}
		else
			break ;
	}
	return (len);
}
