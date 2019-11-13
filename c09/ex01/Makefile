NAME = libft.a

SRCDIR = ./srcs/
INC = ./includes/

SRCNAMES =	ft_putchar.c \
		ft_swap.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strcmp.c

SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
OBJS = $(SRC:.c=.o)


CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

.c.o:
	${CC} -c $^ ${CFLAGS} -I${INCDIR}  -o $@

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
