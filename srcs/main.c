#include "libft.h"
#include <stdio.h>

int		ft_toklen(const char *s, const char *set);
int		ft_duplen(const char *s, const char *set);
char	*ft_strntok(const char *s, const char *set, int n);
char	*ft_strtok(const char *s, const char *set);

int	main(void)
{
	char	*test1;
	char	*test2;

	test1 = ft_strdup("51234");
	test2 = ft_strdup("0,0x00ff00ff");
}

int	pattern(const char *s, t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		ft_check(s[i]);
		i += lst->content->len;
		lst = lst->next;
	}
}

t_ptn	*ft_ptnnew(char *set, int min, int max)
{
	t_ptn	*new;

	new = (t_ptn *)malloc(sizeof(t_ptn));
	if (new == NULL)
		return (NULL);
	new->set = set;
	new->min = min;
	new->max = max;
	new->len = 0;
	return (new);
}
