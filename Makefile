SRCS	= ft_check_format.c ft_printf.c ft_putaddress.c ft_puthexa.c ft_putstr.c \
			ft_putchar.c ft_putnbr.c ft_putunsigned.c ft_strlen.c ft_strchr.c

OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

AR		= ar rcs

RM		= rm -f

.c.o:	
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
