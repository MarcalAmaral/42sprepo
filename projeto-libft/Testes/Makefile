# My first makefile

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra -std=c99

# Project name
NAME = libft.a

# .h files
H_SOURCE = 	ft_strlen.h \
			helloworld.h \
 
# .c files
C_SOURCE =  main.c \
			helloworld.c \
			ft_strlen.c \

# Object files
OBJ = $(C_SOURCE:.c = .o)


all: $(NAME)
 
$(NAME): $(OBJ)
	$(CC) -o $@ $^
	ar -rcs $(NAME) $(OBJ)
 
%.o: %.c %.h
	$(CC) -o $@ $< $(CFLAGS)
 
main.o: main.c $(H_SOURCE)
	$(CC) -o $@ $@ $(CFLAGS)
 
clean:
	rm -rf *.o *~ $(NAME)
