NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = 
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)


re: fclean all

.PHONY: clean fclean re all