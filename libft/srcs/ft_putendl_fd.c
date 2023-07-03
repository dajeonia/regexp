/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:42:41 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/18 19:48:08 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putendl_fd(char *s, int fd)
{
	ssize_t	put;

	put = write(fd, s, ft_strlen(s));
	if (put >= 0)
		put += write(fd, "\n", 1);
	return (put);
}
