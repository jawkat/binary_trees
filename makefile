CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
VAR = 2

SRCS = binary_tree_print.c  0-binary_tree_node.c 1-binary_tree_insert_left.c 2-binary_tree_insert_right.c $(VAR)-main.c
OBJS = $(SRCS:.c=.o)
TARGET = $(VAR)-node

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
	$(RM) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
