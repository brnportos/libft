NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./include

SRC_DIR = src
OBJ_DIR = obj

TEST_DIR = tdd
TEST_EXEC = test_run

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC))
TEST_SRC = $(wildcard $(TEST_DIR)/ft_memcpy_TDD.c)

all: $(NAME)

test: $(NAME)
	@$(CC) $(CFLAGS) $(TEST_SRC) $(NAME) -o $(TEST_EXEC)
	@./$(TEST_EXEC)

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
	@rm -f $(NAME) $(TEST_EXEC)
	echo "Obj and libft.a removed"

re: fclean all

.PHONY: all clean fclean re
