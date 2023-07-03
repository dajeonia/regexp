NAME = fdf
LIBFT = libft
SOURCES = main.c #ft_atoi_base.c

OBJS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))
SRCS = $(addprefix $(SRC_DIR)/, $(SOURCES))
LIBS = $(addprefix $(LIBFT)/, $(LIBFT).a)

SRC_DIR = srcs
OBJ_DIR = objs
LIBFLAGS = -L libft -l ft

CC = cc
CFLAGS = -Wall -Werror -Wextra -I libft/incs

all : $(NAME)

fclean : 
	rm -rf $(OBJ_DIR)
	rm -rf $(NAME)
	make fclean -C $(LIBFT)

re :
	make fclean
	make all


$(NAME) : $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFLAGS) -o $@

$(LIBS) :
	make -C libft

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR) : 
	mkdir $@
