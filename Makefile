NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -I headers/

# Define the base object directory
OBJ_DIR = .obj/

# Source files grouped by category
IS_CHAR_SRC = $(addprefix libft_src/is_char/, ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isascii.c \
	ft_isspace.c ft_isprint.c ft_toupper.c ft_tolower.c)
MEM_ALLOC_SRC = $(addprefix libft_src/mem_alloc/, ft_calloc.c ft_realloc.c ft_recalloc.c)
MTX_UTILS_SRC = $(addprefix libft_src/mtx_utils/, ft_split.c ft_free_mtx.c ft_free_stack_mtx.c)
MEMORY_UTILS_SRC = $(addprefix libft_src/memory_utils/, ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c)
STR_ALLOC_SRC = $(addprefix libft_src/str_alloc/, ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_freejoin.c\
	ft_strjoin_until_nl.c)
STR_UTILS_SRC = $(addprefix libft_src/str_utils/, ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strncpy.c ft_strncmp.c ft_strnstr.c ft_strmapi.c ft_striteri.c ft_strcmp.c)
FILE_DESCRIPTOR_SRC = $(addprefix libft_src/file_descriptor/, ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c)
LIST_SRC = $(addprefix libft_src/list/, ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstmap.c ft_lstiter.c ft_int_lstadd_back.c ft_int_lstclear.c ft_int_lstnew.c ft_int_lstsize.c)
ARR_TO_NUM_SRC = $(addprefix libft_src/arr_to_num/, ft_atoi.c ft_atol.c ft_atoll.c ft_atos.c ft_atoui.c)
ERROR_SRC = $(addprefix libft_src/error_managment/, ft_error.c)
# Additional sources
PRINTF_SRC = $(addprefix libft_src/printf_src/, ft_printf.c ft_printf_str.c ft_printf_binary.c ft_printf_nbr.c)
GET_NEXT_LINE_SRC = $(addprefix libft_src/get_next_line_src/, get_next_line.c get_next_line_utils.c)
PUSH_SWAP_HELPERS_SRC = $(addprefix libft_src/push_swap_helpers_src/helper/, ft_check_input.c ft_is_valid_input.c)
PUSH_SWAP_MOVES_SRC = $(addprefix libft_src/push_swap_helpers_src/moves/, ft_push.c ft_rotate.c ft_reverse_rotate.c ft_swap.c)
# Object files for each category
IS_CHAR_OBJ = $(IS_CHAR_SRC:libft_src/is_char/%.c=$(OBJ_DIR)%.o)
MEM_ALLOC_OBJ = $(MEM_ALLOC_SRC:libft_src/mem_alloc/%.c=$(OBJ_DIR)%.o)
MTX_UTILS_OBJ = $(MTX_UTILS_SRC:libft_src/mtx_utils/%.c=$(OBJ_DIR)%.o)
MEMORY_UTILS_OBJ = $(MEMORY_UTILS_SRC:libft_src/memory_utils/%.c=$(OBJ_DIR)%.o)
STR_ALLOC_OBJ = $(STR_ALLOC_SRC:libft_src/str_alloc/%.c=$(OBJ_DIR)%.o)
STR_UTILS_OBJ = $(STR_UTILS_SRC:libft_src/str_utils/%.c=$(OBJ_DIR)%.o)
FILE_DESCRIPTOR_OBJ = $(FILE_DESCRIPTOR_SRC:libft_src/file_descriptor/%.c=$(OBJ_DIR)%.o)
LIST_OBJ = $(LIST_SRC:libft_src/list/%.c=$(OBJ_DIR)%.o)
ARR_TO_NUM_OBJ = $(ARR_TO_NUM_SRC:libft_src/arr_to_num/%.c=$(OBJ_DIR)%.o)
ERROR_OBJ = $(ERROR_SRC:libft_src/error_managment/%.c=$(OBJ_DIR)%.o)

PRINTF_OBJ = $(PRINTF_SRC:libft_src/printf_src/%.c=$(OBJ_DIR)%.o)
GET_NEXT_LINE_OBJ = $(GET_NEXT_LINE_SRC:libft_src/get_next_line_src/%.c=$(OBJ_DIR)%.o)
PUSH_SWAP_HELPERS_OBJ = $(PUSH_SWAP_HELPERS_SRC:libft_src/push_swap_helpers_src/helper/%.c=$(OBJ_DIR)%.o)
PUSH_SWAP_MOVES_OBJ = $(PUSH_SWAP_MOVES_SRC:libft_src/push_swap_helpers_src/moves/%.c=$(OBJ_DIR)%.o)

# Combine all object files
OBJ = $(IS_CHAR_OBJ) $(MEM_ALLOC_OBJ) $(MTX_UTILS_OBJ) $(MEMORY_UTILS_OBJ) $(STR_ALLOC_OBJ) \
	$(STR_UTILS_OBJ) $(FILE_DESCRIPTOR_OBJ) $(LIST_OBJ) $(ARR_TO_NUM_OBJ) \
	$(PRINTF_OBJ) $(GET_NEXT_LINE_OBJ) $(PUSH_SWAP_HELPERS_OBJ) $(PUSH_SWAP_MOVES_OBJ) \
	$(ERROR_OBJ)

# ANSI escape sequence for no color (reset)
NC = \033[0m


all: $(NAME)

# Pattern rules to compile object files from different categories
$(OBJ_DIR)%.o: libft_src/is_char/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/mem_alloc/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/mtx_utils/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/memory_utils/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/str_alloc/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/str_utils/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/file_descriptor/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/list/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/arr_to_num/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/printf_src/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/get_next_line_src/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/push_swap_helpers_src/helper/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/push_swap_helpers_src/moves/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: libft_src/error_managment/%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

# Rule to make the library, only display ASCII art on success
$(NAME): $(OBJ)
	@echo "Creating library $(NAME)"
	@ar rcs $@ $(OBJ)
	@echo "$(COOL_YELLOW)Library $(NAME) created.$(NC)"
	@echo "$$LIBFT_ASCII_ART"
	@sleep 1.5
	@clear
	@echo "$(COOL_YELLOW)Library $(NAME) created.$(NC)"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)*.o

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)

re: fclean all
# ASCII Art for "Libft"
define LIBFT_ASCII_ART
    ___ __    ______
   / (_) /_  / __/ /_
  / / / __ \/ /_/ __/
 / / / /_/ / __/ /_
/_/_/_.___/_/  \__/           _ ___
  _________  ____ ___  ____  (_) (_)___  ____ _
 / ___/ __ \/ __ `__ \/ __ \/ / / / __ \/ __ `/
/ /__/ /_/ / / / / / / /_/ / / / / / / / /_/ /  _ _ _
\___/\____/_/ /_/ /_/ .___/_/_/_/_/ /_/\__, /  (_|_|_)
                   /_/                /____/
endef
export LIBFT_ASCII_ART
