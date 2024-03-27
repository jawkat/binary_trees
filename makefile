CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
VAR = 0-main.c

SRCS = binary_tree_print.c  0-binary_tree_node.c $(VAR)
OBJS = $(SRCS:.c=.o)
TARGET = 0-node

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)
	$(RM) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(TARGET)
