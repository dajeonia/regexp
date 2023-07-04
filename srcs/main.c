#include "libft.h"
#include <stdio.h>

int		ft_toklen(const char *s, const char *set);
int		ft_duplen(const char *s, const char *set);
char	*ft_strntok(const char *s, const char *set, int n);
char	*ft_strtok(const char *s, const char *set);

int	main(void)
{
	// char	*test = ft_strdup("{1, 5}");
	char	*test = ft_strdup("abcde fdsaf sg sadg sadg sa ");
	int		i;
	int		n;

	i = 0;
	n = 9;
	while (i < n)
	{
		printf("test[%d]: %s\n", i, ft_strntok(test, " ", i));
		i++;
	}
}

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

int	ft_parse_len(const char *s, const char *set)
{
	
}

int	ft_pair(const char *s, const char *set)
{
	char	a[11] = "({[\"')}]\"'";
	char	pair;
	int		len;
	int		ctos;

	pair = a[ft_stridx(a, *s)];
	ctos = ft_ctos(pair);
	len = ft_toklen(s, set);
	free(ctos);
	return (len);
}
