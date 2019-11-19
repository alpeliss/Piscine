SRCDIR	= ./code/
SRCNAME	=	main.c		\
			utils.c		\
		   	get_line.c	
SRCS	= ${addprefix ${SRCDIR}, ${SRCNAME}}

INCDIR	=./includes/

OBJS	= ${SRCS:.c=.o}

NAME	= BSQ

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
