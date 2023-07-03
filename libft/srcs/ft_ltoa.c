/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajeon <dajeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:42:05 by dajeon            #+#    #+#             */
/*   Updated: 2023/06/30 19:29:58 by dajeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ltoa_number(char *ltoa, int i, unsigned long n, char *base);
static int	ltoa_get_digit(unsigned long n, char *base);

char	*ft_ltoa(long n, char *base, int issigned)
{
	char			*ltoa;
	int				i;
	int				digit;
	unsigned long	un;

	i = 0;
	if (issigned && n < 0)
	{
		i = 1;
		un = (unsigned long)(-n);
	}
	else
		un = n;
	digit = ltoa_get_digit(un, base);
	ltoa = (char *)malloc(sizeof(char) * (digit + i + 1));
	if (i == 1)
		ltoa[0] = '-';
	ltoa_number(ltoa, i, un, base);
	return (ltoa);
}

static void	ltoa_number(char *ltoa, int minus, unsigned long n, char *base)
{
	int	digit;
	int	radix;
	int	i;

	radix = ft_strlen(base);
	digit = ltoa_get_digit(n, base);
	ltoa[digit + minus] = '\0';
	i = 0;
	while (i < digit)
	{
		ltoa[-i + (digit + minus - 1)] = base[n % radix];
		n /= radix;
		i++;
	}
}

static int	ltoa_get_digit(unsigned long n, char *base)
{
	int radix;
	int	digit;

	radix = ft_strlen(base);
	digit = 1;
	while (n / radix)
	{
		n /= radix;
		digit++;
	}
	return (digit);
}
