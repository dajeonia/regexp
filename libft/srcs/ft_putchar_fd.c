/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:38:11 by dajeon            #+#    #+#             */
/*   Updated: 2023/07/01 06:58:17 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

ssize_t	ft_putchar_fd(char c, int fd)
{
	ssize_t	put;

	put = write(fd, &c, 1);
	return (put);
}
