NAME	:=	libftprintf.a

CC := gcc

CFLAGS := -c -Wall -Wextra -Werror

SRC := ft_printf.c ft_printhex.c ft_putchar.c ft_putnbr.c ft_putunsigned.c ft_putstr.c\

OBJ	:=	$(SRC:.c=.o)

$(NAME)	:	$(OBJ)
			$(CC)	$(CFLAGS)	ft_printf.h	$(SRC) 
			ar -rcs $(NAME) $(OBJ)

all : $(NAME)

clean : 
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)
		
re : fclean all