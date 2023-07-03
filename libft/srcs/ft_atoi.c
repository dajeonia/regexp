/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:54:06 by dajeon            #+#    #+#             */
/*   Updated: 2023/07/03 12:16:44 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static long	ft_strtol(const char *nptr);
static int	ft_ctoi(int c, int sign);
static long	ft_make_number(long nbr, int new);

int	ft_atoi(const char *nptr)
{
	return (ft_strtol(nptr));
}

static long	ft_strtol(const char *nptr)
{
	int		sign;
	long	nbr;

	sign = 1;
	while (*nptr == 32 || (9 <= *nptr && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	nbr = 0;
	while ('0' <= *nptr && *nptr <= '9')
	{
		nbr = ft_make_number(nbr, ft_ctoi(*nptr, sign));
		nptr++;
	}
	return (nbr);
}

static int	ft_ctoi(int c, int sign)
{
	return (sign * (c - '0'));
}

static long	ft_make_number(long nbr, int new)
{
	long	temp;
	long	check_nbr;
	int		check_new;

	temp = nbr * 10 + new;
	check_nbr = temp / 10;
	check_new = temp % 10;
	if (check_nbr == nbr && check_new == new)
		return (temp);
	else if (nbr > 0)
		return (-1);
	else
		return (0);
}
