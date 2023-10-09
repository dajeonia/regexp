#ifndef OBJECT_H
# define OBJECT_H

# include "../libft/incs/libft.h"

typedef struct s_plane
{
	double	point[3];
	double	normal[3];
	int		color[3];
}	t_plane;

typedef struct s_sphere
{
	double	point[3];
	int		diameter;
	int		color[3];
}	t_sphere;

typedef struct s_cylinder
{
	double	point[3];
	double	normal[3];
	int		diameter;
	int		height;
	int		color[3];
}	t_cylinder;

#endif
