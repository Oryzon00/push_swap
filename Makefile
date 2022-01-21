SRCS =	src/main.c \

OBJ = $(SRCS:.c=.o)

CC = clang

RM = rm -f

DEBUG = -g3

CFLAGS = -Wall -Wextra -Werror -g

OPTI = -O3 -flto

NAME = push_swap

INC_DIR = includes

PATH_LIBFT = ./libft

%.o: %.c
		$(CC) $(CFLAGS) -I ${INC_DIR} -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJ)
			make -C $(PATH_LIBFT) bonus --silent
			$(CC)  $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)

clean:
		rm -f $(OBJ)
		make -C $(PATH_LIBFT) fclean --silent

fclean:	clean
		rm -f $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re 
