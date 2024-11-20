# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoutumur <aoutumur@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 14:20:18 by aoutumur          #+#    #+#              #
#    Updated: 2024/11/15 13:22:04 by aoutumur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom du fichier de sortie pour la bibliothèque
NAME = libftprintf.a

# Répertoire où se trouve la bibliothèque libft et nom de son fichier de sortie
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Liste des fichiers sources pour ft_printf
SRCS = 	ft_printf.c \
   		ft_print_char.c \
  		ft_print_str.c \
   		ft_print_ptr.c \
   		ft_print_nbr.c \
   		ft_print_unsigned.c \
   		ft_print_hex.c \
   		ft_print_percent.c

# Convertit la liste des fichiers source (.c) en une liste de fichiers objet (.o)
OBJS = $(SRCS:.c=.o)

# Compilateur et options de compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilibft -I. -g

# Règle principale all: compile libftprintf.a et s'assure que libft est également compilée
all: $(LIBFT) $(NAME)

# Règle pour compiler libftprintf.a à partir des fichiers objets
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ar -s $(NAME)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/libft.a .

# Règle pour compiler la bibliothèque libft en appelant le Makefile dans le répertoire libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Règle pour supprimer les fichiers objets de ft_printf
clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

# Règle pour supprimer libftprintf.a et nettoyer libft
fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

# Règle pour recompiler tout depuis zéro
re: fclean all

# Déclaration des règles qui ne sont pas des fichiers réels
.PHONY: all clean fclean re





