NAME = libft.a

SRCDIR = ./srcs/

SRCNAMES =	ft_putchar.c \
			ft_swap.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_strcmp.c

INC = ./includes/
SRC = $(addprefix $(SRCDIR), $(SRCNAMES))
OBJ = $(patsubst %.c,%.o, $(SRC))


CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(SRC)
	ar r $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
