CC = gcc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address -pedantic

SRCS = src/basics_c.c main.c
OBJS = $(SRCS:.c=.o)

.PHONY: depend clean

default: mypr

mypr:	$(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	$(RM) src/*.o mypr