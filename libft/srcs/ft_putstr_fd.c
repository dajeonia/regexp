/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:40:24 by dajeon            #+#    #+#             */
/*   Updated: 2023/07/01 06:58:26 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_putstr_fd(char *s, int fd)
{
	ssize_t	put;

	put = write(fd, s, ft_strlen(s));
	return (put);
}
