/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iseqmv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:11:51 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/16 20:36:06 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_iseqmv(char const *s, char c, int rev)
{
	int		true;

	true = !rev;
	while (*s)
	{
		if (ft_iseq(*s, c) == true)
			s++;
		else
			break ;
	}
	return ((char *)s);
}
