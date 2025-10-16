
SRC = main.c

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC: .C = .O)