/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinmv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:12:38 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/16 20:36:24 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_isinmv(char const *s, char const *set, int rev)
{
	int	true;

	true = !rev;
	while (*s)
	{
		if (ft_isin(*s, set) == true)
			s++;
		else
			break ;
	}
	return ((char *)s);
}
