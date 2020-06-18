NAME = fillit

SRCS = srcs/additional.c		\
	   srcs/figura.c			\
	   srcs/for_print.c			\
	   srcs/main.c				\
	   srcs/output.c			\
	   srcs/solve.c				\
	   srcs/tetrimino.c			\
	   srcs/tetriminos_type.c	\
	   srcs/start_size.c		\
	   srcs/square.c

OBJS = $(patsubst srcs/%.c,objs/%.o,$(SRCS))
OBJS_DIR = objs

CC = clang
FLAGS = -Wall -Wextra -Werror
LFLAGS = -L./includes/libft -lft
INCLUDES = -I./includes

LIBFT = includes/libft/libft.a
LFT_DIR = includes/libft

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(FLAGS) $(INCLUDES) $(LFLAGS)

$(LIBFT):
	$(MAKE) -C $(LFT_DIR)

objs/%.o: srcs/%.c | $(OBJS_DIR)
	$(CC) -c -o $@ $< $(FLAGS) $(INCLUDES)

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(MAKE) clean -C $(LFT_DIR)
	rm -rf $(OBJS_DIR)

fclean: clean
	$(MAKE) fclean -C $(LFT_DIR)
	rm -rf $(NAME)

re: fclean all
