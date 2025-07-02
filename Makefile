NAME = libftprintf.a

SRCS = ft_printf.c \
       ft_putchar.c \
       ft_putnbr.c \
       ft_putstr.c \
       ft_puthex.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
CC = gcc
RM = rm -rf
AR = ar -rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
