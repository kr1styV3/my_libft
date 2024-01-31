NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I headers/

# Define the base object directory
OBJ_DIR = .obj/

# Source files with directory prefix
LIBFT_SRC = $(addprefix src/libft_src/,ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_isprint.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstmap.c ft_lstiter.c)

PRINTF_SRC = $(addprefix src/printf_src/,ft_printf.c ft_printf_str.c ft_printf_binary.c ft_printf_nbr.c)


# Object files for the library
LIBFT_OBJ = $(LIBFT_SRC:src/libft_src/%.c=$(OBJ_DIR)%.o)
PRINTF_OBJ = $(PRINTF_SRC:src/printf_src/%.c=$(OBJ_DIR)%.o)

# Combine all object files
OBJ = $(LIBFT_OBJ) $(PRINTF_OBJ)

# ANSI escape sequence for red text
RED = \033[0;31m
PINK_FLUO=\033[38;5;201m
GOLD=\033[38;5;220m
COOL_YELLOW=\033[38;2;195;215;0m
# ANSI escape sequence for no color (reset)
NC = \033[0m


all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

# Rule to make the object files for libft and printf
$(OBJ_DIR)%.o: src/libft_src/%.c | $(OBJ_DIR)
	@echo "$(RED)Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: src/printf_src/%.c | $(OBJ_DIR)
	@echo "$(RED)Compiling $<..."
	@$(CC) $(CFLAGS) -c $< -o $@

# Rule to make the library
$(NAME): $(OBJ)
	@echo "$(PINK_FLUO)Creating archive $(NAME)..."
	@ar rcs $@ $(OBJ)
	@echo "$(GOLD)Library $(NAME) created."

.PHONY: all clean fclean re


clean:
	@echo "$(GOLD)Cleaning object files..."
	@rm -rf $(OBJ_DIR)*.o
	@echo "$(COOL_YELLOW)Object files cleaned."

fclean: clean
	@echo "$(GOLD)Full clean (including $(NAME))..."
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)

re: fclean all