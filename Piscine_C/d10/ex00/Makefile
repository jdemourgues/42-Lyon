# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 14:29:19 by jde-mour     #+#   ##    ##    #+#        #
#    Updated: 2018/07/16 14:29:32 by jde-mour    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME 				= 	libft.a
PATH_TO_HEADERS 	=	./includes
CFLAGS 				+= 	-Wall -Wextra -Werror
ORIGIN 				= 	srcs/ft_putchar.c 	\
						srcs/ft_putstr.c 	\
						srcs/ft_strcmp.c 	\
						srcs/ft_strlen.c	\
						srcs/ft_swap.c
DEST 				= 	ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): $(DEST)
	ar rc $(NAME) $(DEST)

$(DEST):
	gcc $(CFLAGS) -c $(ORIGIN) -I $(PATH_TO_HEADERS)

clean:
	rm -f $(DEST)

fclean: clean
	rm -f $(NAME)

re: fclean all