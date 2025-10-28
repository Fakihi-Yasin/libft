
SRC =  ft_isalpha.c ft_isdigit.c  ft_isalnum.c ft_isascii.c  ft_isprint.c

# LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a 
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)   

all: $(LIBFT)        

$(LIBFT): $(OBJ)
	ar rcs $(LIBFT) $(OBJ)   

clean: 
	rm -f $(OBJ)         

fclean: clean    
	rm -f $(LIBFT)      
re: fclean all    
