#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int	ft_atoi_base(const char *nptr, const char *base);

int	main(void)
{
	//printf("%d\n", atoi("-"));
	//printf("%d\n", ft_atoi("-"));
	printf("%d\n", ft_atoi_base("123145", "0123456789abcdef"));
	printf("%d\n", 0x123145);
}

