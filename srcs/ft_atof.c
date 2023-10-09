#include "regexp.h"

static double	atof_sign(const char *nptr, int *i);

double	ft_atof(const char *nptr)
{
	int		i;
	int		exp;
	double	sign;
	double	nbr;

	i = 0;
	nbr = 0;
	sign = atof_sign(nptr, &i);;
	while (ft_isin(nptr[i], "0123456789"))
		nbr = 10.0 * nbr + (nptr[i++] - '0');
	if (nptr[i] == '.')
	{
		exp = 0;
		i++;
		while (ft_isin(nptr[i], "0123456789"))
		{
			nbr = 10.0 * nbr + (nptr[i++] - '0');
			exp++;
		}
		while (exp-- > 0)
			nbr /= 10;
	}
	nbr *= sign;
	return (nbr);
}

static double	atof_sign(const char *nptr, int *i)
{
	double	sign;

	sign = 1;
	if (ft_isspace(nptr[*i]))
		(*i)++;
	if (nptr[*i] == '-')
	{
		sign *= -1;
		(*i)++;
	}
	return (sign);
}
