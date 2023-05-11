# My first makefile

# Project name
NAME = libft.a

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra -std=c99

# .c files
C_SOURCE =  ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
	  		ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strdup.c	\
			ft_memcpy.c	\
			ft_memmove.c 	\
			ft_strchr.c 	\
			ft_atoi.c 	\
			ft_memchr.c 	\
			ft_strrchr.c 	\

# Object files
OBJ = ft_strlen.o \
	  ft_isalpha.o \
	  ft_isdigit.o \
	  ft_isalnum.o \
	  ft_isascii.o \
	  ft_isprint.o \
	  ft_tolower.o \
	  ft_toupper.o \
	  ft_strdup.o	\
	  ft_memcpy.o	\
	  ft_memmove.o	\
	  ft_strchr.o 	\
	  ft_atoi.o 	\
	  ft_memchr.o 	\
	  ft_strrchr.o 	\

all: $(NAME)

%.o: %.c %.h
	$(CC) -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -rf *.o

fclean: clean
	rm -rf *$(NAME)

re: fclean all