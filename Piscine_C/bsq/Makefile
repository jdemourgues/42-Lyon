# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: tmezouri <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/19 13:08:01 by tmezouri     #+#   ##    ##    #+#        #
#    Updated: 2018/07/24 17:40:27 by tmezouri    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME	= bsq
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
SRC		= ft_display.c bsq.c check_max.c
OBJ		= ft_display.o bsq.o check_max.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
