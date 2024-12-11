CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBC = ar rcs
RM = rm -f

SRCS =	ft_printf.c ft_pointer.c\
	ft_print_string.c ft_print_char.c ft_unsigned.c \
		ft_putnbr.c ft_hexadacimal.c ft_hex_conversion.c \
		
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re
