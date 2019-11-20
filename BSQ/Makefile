SRCDIR	= ./srcs/
SRCNAME	=	main.c			\
			utils.c			\
		   	get_line.c		\
			make_tab.c		\
			resolv.c		\
			first_line.c	\
			get_full_line.c
SRCS	= ${addprefix ${SRCDIR}, ${SRCNAME}}

INCDIR	=./includes/

OBJS	= ${SRCS:.c=.o}

NAME	= bsq

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
