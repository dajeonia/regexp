/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:56:59 by dajeon            #+#    #+#             */
/*   Updated: 2023/05/26 21:49:33 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char		**ft_salloc(char const *s, char c, size_t pnum);
static size_t	ft_split_count(char const *s, char c);
char			**ft_free_strs(char **strs, size_t size);

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	pnum;
	size_t	num;
	size_t	i;
	size_t	j;

	pnum = ft_split_count(s, c);
	split = ft_salloc(s, c, pnum);
	i = 0;
	num = 0;
	while (s[i] && split != NULL)
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i] != '\0')
				split[num][j++] = s[i++];
			split[num++][j] = '\0';
		}
		else
			i++;
	}
	if (split != NULL)
		split[num] = NULL;
	return (split);
}

static size_t	ft_split_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_salloc(char const *s, char c, size_t pnum)
{
	size_t	j;
	size_t	len;
	char	**salloc;

	j = 0;
	salloc = (char **)malloc(sizeof(char *) * (pnum + 1));
	while (*s && salloc != NULL)
	{
		if ((j == 0 || *(s - 1) == c) && *s != c)
		{
			len = 0;
			while (*s != c && *s != '\0')
			{
				s++;
				len++;
			}
			salloc[j] = (char *)malloc(sizeof(char) * (len + 1));
			if (salloc[j++] == NULL)
				return (salloc = ft_free_strs(salloc, j - 1));
		}
		else
			s++;
	}
	return (salloc);
}

char	**ft_free_strs(char **strs, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(strs[i++]);
	free(strs);
	return (NULL);
}
