NAME = regexp
LIBFT = libft
SOURCES = main.c \
		  ft_atof.c \
		  parse_integer.c \
		  parse_float.c \
		  utils.c


INCLUDES = regexp.h

SRC_DIR = srcs
OBJ_DIR = objs
INC_DIR = srcs

OBJS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.c=.o))
SRCS = $(addprefix $(SRC_DIR)/, $(SOURCES))
SRCS = $(addprefix $(INC_DIR)/, $(INCLUDES))
LIBS = $(addprefix $(LIBFT)/, $(LIBFT).a)

LIBFLAGS = -L libft -l ft

CC = cc
CFLAGS = -Wall -Werror -Wextra -I $(INC_DIR)

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
