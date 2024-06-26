CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
VAR = 5

SRCS = binary_tree_print.c  0-binary_tree_node.c 2-binary_tree_insert_right.c 5-binary_tree_is_root.c $(VAR)-main.c
OBJS = $(SRCS:.c=.o)
TARGET = $(VAR)-node

all: betty $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
	$(RM) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

betty:
	betty $(SRCS)

clean:
	$(RM) $(OBJS) $(TARGET)
