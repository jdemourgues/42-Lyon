# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+      #
#    Created: 2018/10/15 10:59:35 by jde-mour     #+#   ##    ##    #+#        #
#    Updated: 2018/10/15 10:59:35 by jde-mour    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	rm -f ft_display_file.o

fclean:	clean
	rm -f $(NAME)

re:	fclean	all
