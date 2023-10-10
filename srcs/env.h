#ifndef ENV_H
# define ENV_H

# include "../libft/incs/libft.h"

typedef struct s_env
{
	t_ambient	amb;
	t_light		light;
	t_camera	camera;
}	t_env;

typedef struct s_ambient
{
	double	ratio;
	int		color[3];
}	t_ambient;

typedef struct s_light
{
	double	ratio;
	double	point[3];
	int		color[3];
}	t_light;

typedef struct s_camera
{
	double	fov;
	double	normal[3];
}	t_camera;

#endif
