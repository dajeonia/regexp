#include <fcntl.h>
#include <stdio.h>

int	ft_read_rt(const char *filepath)
{
	t_rt	*rt;
	int		fd;
	int		i;
	char	*buf;

	fd = open(argv[1], O_RDONLY);
	i = 0;
	while (1)
	{
		buf = get_next_line(fd);
		if (buf == NULL)
			break ;
		else if (buf[0] != '\n')
			
		printf("[%d]: %s", i++, buf);
		free(buf);
	}
	close(fd);
}
