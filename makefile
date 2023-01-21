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
LIBRARY = libft.a

# Codigo fuente de la libreria
SOURCES = ft_bzero.c ft_isalnum.c ft_isdigit.c ft_strlen.c ft_strncmp.c ft_isacsii.c ft_isalpha.c ft_isprint.c
# Cabecera de lia libreia
HEADERS = libft.h

# Creacion de objetos a partir de SOURCES
OBJECTS = $(SOURCES:.c=.o)

# Compilador
CC = gcc

# Flags de compilacion
CFLAGS = -Wall -Wextra -Werror

#---REGLAS---

# Regla para construir la biblioteca, depende de los objetos
$(LIBRARY): $(OBJECTS) $(HEADERS)
	ar -rcs $@ $^

# compila los objetos a partir de SOURCES
# %.o: %.c
# $(CC) $(CFLAGS) -c $< -o $@ 

# limpia toda la libreria
fclean:
	rm -f $(OBJECTS) $(LIBRARY)
# Limpia los objetos
clean:
	rm -f $(OBJECTS)
# Construye la libreria
all: $(LIBRARY)

re: fclean all

.PHONY: all clean fclean re