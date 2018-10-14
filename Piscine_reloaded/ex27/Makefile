

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
