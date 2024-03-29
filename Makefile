SRCS =	srcs/main.c \
		srcs/parsing.c \
		srcs/lst_utils.c \
		srcs/check_error.c \
		srcs/free_list.c \
		srcs/operateur/push.c \
		srcs/operateur/swap.c \
		srcs/operateur/rotate.c \
		srcs/operateur/reverse_rotate.c \
		srcs/algo.c \
		srcs/solve.c \
		srcs/cost.c \
		srcs/algo_utils.c \
		


OBJ = $(SRCS:.c=.o)

CC = clang

RM = rm -f

DEBUG = -g3 -fsanitize=address 

CFLAGS = -Wall -Wextra -Werror -g3 

OPTI = -O3 -flto

NAME = push_swap

INC_DIR = includes

PATH_LIBFT = ./libft

%.o: %.c
		$(CC) $(CFLAGS) -I ${INC_DIR} -c $< -o $@

all: $(NAME)

$(NAME):	$(OBJ)
			make -C $(PATH_LIBFT) --silent
			$(CC)  $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)

clean:
		rm -f $(OBJ)
		make -C $(PATH_LIBFT) fclean --silent

fclean:	clean
		rm -f $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re 
