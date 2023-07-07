t_list	*ft_lstptn(char *pattern) {
	t_list	*head;
	t_list	*cur;
	int		i;
	int		len;

	head = ft_lsthead(&cur);
	if (head == NULL)
		return (NULL);
	while (pattern[i])
	{	
		len = ptn_parse_one(&cur, &pattern[i]);
		if (len == 1)
		{
			ft_lstclear(lst, free);
			return (NULL);
		}
		i += len;
		
	}
	return (lst);
}

int	ptn_parse_one(t_list **cur, char const *pattern)
{
	int	len;

	len = 0;

	return (len);
}

t_list	*ptn_lstnew(t_ptn *ptn)
{
	t_list	*new;
	if (ptn == NULL)
		return (NULL);
	new = ft_lstnew(ptn);
	if (cur == NULL)
		return (NULL);
	return (new);
}

t_list	*ptn_lsthead(t_list **cur)
{
	t_list	*head;
	char	*none;

	none = (char *)malloc(sizeof(char) * 1);
	if (none == NULL)
		return (NULL);
	head = ft_lstnew(none);
	if (head == NULL)
	{
		free(none);
		return (NULL);
	}
	*cur = head;
	return (head);
}
