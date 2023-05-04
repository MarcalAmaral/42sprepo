# Name of the project
PROJ_NAME = libft.a

# Compiler
CC = gcc

# Flags for compiler
FLAGS = -c -Wall -Werror -Wextra -ansi -pedantic

# .c files
C_SOURCE = ./helloworld.c \
		   ./main.c \

# .h files
H_SOURCE = helloworld.h

# Object files
OBJ = ${C_SOURCE:.c = .o}


#
# Compilation and linking
#

all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -o $@ $< $(FLAGS)

main.o: main.c $(H_SOURCE)
	$(CC) -o $@ $< $(FLAGS)

clean:
	rm -f *.o $(PROJ_NAME) *~