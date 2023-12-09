NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files
SRC = ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_isprint.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back \
	ft_lstdelone.c ft_lstclear.c

# Object files without directory prefix
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# ANSI escape sequence for red text
RED = \033[0;31m
PINK_FLUO=\033[38;5;201m
GOLD=\033[38;5;220m
COOL_YELLOW=\033[38;2;195;215;0m
# ANSI escape sequence for no color (reset)
NC = \033[0m

all: $(NAME)

%.o: %.c
	@echo "$(RED)Compiling the program : $(PINK_FLUO)$<"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@echo "$(PINK_FLUO)Creating archive $(NAME)..."
	@ar rcs $@ $(OBJ)

bonus: $(BONUS_OBJ)
	@echo "$(PINK_FLUO)Creating archive $(NAME) with bonus objects..."
	@ar rcs $(NAME) $(BONUS_OBJ)

clean:
	@echo "$(GOLD)Cleaning object files..."
	@rm -f $(OBJ)

fclean: clean
	@echo "$(GOLD)Full clean (including $(NAME))..."
	@rm -f $(NAME)

re: fclean all
