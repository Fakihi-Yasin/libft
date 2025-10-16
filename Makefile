
SRC = main.c ft_isalpha.c

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a 

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
