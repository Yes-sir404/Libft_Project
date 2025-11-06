# VARIABLES
NAME = libft.a


#SRC = ft_isalpha.c
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

CC = cc
FLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

# For testing
run: all
	@$(CC) main.c -L. -lft -o test && ./test

# Default rule

all: $(NAME)

# Build the libft library

$(NAME) : $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "libft.a created"

# Compule .c files to .o files

%.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo " Compiled "

# Clear object file 
clean:
	@$(RM) $(OBJ)
	@echo "Object files removed"

# Clear everyThing
fclean: clean
	@$(RM) $(NAME)
	@echo "library removed"

# Rebuild everything from scratch
re: fclean all 

# Avoid conflicts with real files
.PHONY: all clean fclean re 
