NAME = ft_printf
CC = cc -g
CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 
	@echo "ft_printf is created"
clean:
	@rm -rf $(OBJ) 
fclean: clean
	@rm -rf $(NAME)
re: fclean all 