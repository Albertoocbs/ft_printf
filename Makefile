# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 14:20:18 by aoutumur          #+#    #+#              #
#    Updated: 2024/11/11 16:29:54 by aoutumur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_DIR = src
INCLUDES = . include
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRC = 	ft_printf.c \
      	$(SRC_DIR)/ft_print_char.c \
     	$(SRC_DIR)/ft_print_str.c \
      	$(SRC_DIR)/ft_print_ptr.c \
      	$(SRC_DIR)/ft_print_nbr.c \
      	$(SRC_DIR)/ft_print_unsigned.c \
      	$(SRC_DIR)/ft_print_hex.c \
      	$(SRC_DIR)/ft_print_percent.c
OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(addprefix -I, $(INCLUDES))

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

