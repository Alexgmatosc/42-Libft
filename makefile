#---VARIABLES---

# Nombre de la libreria
LIBRARY = libft.a

# Codigo fuente de la libreria
SOURCES = ft_isalpha.c ft_isprint.c ft_strlen.c

# Cabecera de lia libreia
HEADERS = libft.h

# Creacion de objetos a partir de SOURCES
OBJECTS = $(SOURCES:.c=.o)

# Compilador
CC = gcc

# Flags de compilacion
CFLAGS = -c -Wall -Iinclude

#---REGLAS---

# Regla para construir la biblioteca, depende de los objetos
$(LIBRARY): $(OBJECTS) $(HEADERS)

	ar rcs $@ $^

# compila los objetos a partir de SOURCES
%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<

# limpia toda la libreria
fclean:
	rm -f $(OBJECTS) $(LIBRARY)
# Limpia los objetos
clean:
	rm -f $(OBJECTS)
# Construye la libreria
all: $(LIBRARY)

re: fclean all

.PHONY: all, clean, fclean, re