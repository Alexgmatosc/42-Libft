# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alematos <alematos@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 16:56:42 by alematos          #+#    #+#              #
#    Updated: 2023/01/21 16:56:42 by alematos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---VARIABLES---

# Nombre de la libreria
NAME = libft.a

# Codigo fuente de la libreria
SOURCES = ft_isascii.c ft_isalpha.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strncmp.c ft_toupper.c ft_bzero.c ft_isalnum.c  ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c ft_strlen.c ft_tolower.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_split.c
# Cabecera de lia libreia
HEADERS = libft.h

# Creacion de objetos a partir de SOURCES
OBJECTS = $(SOURCES:.c=.o)

# Compilador
CC = @gcc

# Flags de compilacion
CFLAGS = -Wall -Wextra -Werror

#---REGLAS---

# Regla para construir la biblioteca, depende de los objetos y pre-compila automaticamente los objetos
$(NAME): $(OBJECTS) $(HEADERS)
	@echo "\033[1;3;33mCreando la libreria...\033[0m"
	@ar -rcs $@ $^
	@echo "\033[1;7;32mLibreria creada con exito:\n\033[0m" $(NAME)

# limpia toda la libreria
fclean:
	@echo "\033[1;3;31mEliminando:\n\033[0m$(OBJECTS) $(NAME)"
	@echo "\033[1;7;31mLibreria eliminada con exito\033[0m"
	@rm -f $(OBJECTS) $(NAME) 

# Limpia los objetos
clean:
	@echo "\033[1;3;31mEliminando:\n\033[0m$(OBJECTS)"
	@echo "\033[1;7;31mObjetos eliminados con exito\033[0m"
	@rm -f $(OBJECTS)
	
# Construye la libreria
all:$(NAME)

# Limpia y reconstruye la libreria
re: fclean all

.PHONY: all clean fclean re