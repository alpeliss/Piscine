SRCDIR	= ./srcs/
SRCNAME	= ft_cat.c print_line.c utils.c
SRCS	= ${addprefix ${SRCDIR}, ${SRCNAME}}

INCDIR	=./includes/

OBJS	= ${SRCS:.c=.o}

NAME	= ft_cat

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror


.c.o:
			${CC} ${CFLAGS} -I ${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all: 		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
