NAME = libftprintf.a

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c functions.c puthex.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT_DIR)
	ar rcs $(NAME) $(OBJ) $(LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@
	
clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean


fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean


re: fclean all

.PHONY: clean fclean re all
