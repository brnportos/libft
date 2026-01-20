NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include

SRC_DIR = src
OBJ_DIR = obj

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $@ $^
	echo "libft.a created"
clean:
	@rm -rf $(OBJ_DIR)
	echo "Obj removed"

fclean: clean
	@rm -f $(NAME)
	echo "Obj and libft.a removed"

re: fclean all

.PHONY: all clean fclean re
