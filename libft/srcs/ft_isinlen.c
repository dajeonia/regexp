/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:08:35 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/16 20:33:34 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinlen(char const *s, char const *set, int not)
{
	int	len;
	int	true;

	len = 0;
	true = !not;
	while (*s)
	{
		if (ft_isin(*s, set) == true)
		{
			s++;
			len++;
		}
		else
			break ;
	}
	return (len);
}
