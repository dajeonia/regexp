/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:11:34 by dajeon            #+#    #+#             */
/*   Updated: 2023/05/26 19:30:37 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*cal;

	i = 0;
	cal = (char *)malloc(size * count);
	if (cal == NULL)
		return (NULL);
	while (i < size * count)
		cal[i++] = 0;
	return ((void *)cal);
}
