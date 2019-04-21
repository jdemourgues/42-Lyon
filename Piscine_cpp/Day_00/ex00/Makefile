# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jde-mour <jde-mour@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/04/01 12:10:36 by jde-mour     #+#   ##    ##    #+#        #
#    Updated: 2019/04/01 12:19:45 by jde-mour    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME	= megaphone

SRC		= megaphone.cpp
CFLAG	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAG) $(SRC) $^ -o $(NAME)

./objects/%.o: ./%.cpp
	mkdir -p objects
	clang++ -c $< -o $@

clean:
	rm -rf objects
	/bin/rm -f *.o
	/bin/rm -rf ./objects/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
