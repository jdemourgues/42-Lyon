#include "libft.h"

int		main(void)
{

	printf("1. %s\t", strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15));
	printf("1. %s\t", strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	printf("1. %s\t", strnstr("lorem ipsum dolor sit amet", "ipsum", 35));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 35));
	printf("1. %s\t", strnstr("lorem ipsum dolor sit amet", "", 10));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	printf("1. %s\t", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("1. %s\t", strnstr("lorem ipsum dolor sit amet", "dol", 30));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dol", 30));
	printf("1. %s\t", strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
	printf("1. %s\t", strnstr("lorem ipsum dolor sit amet", "sit", 10));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit amet", "sit", 10));
	printf("1. %s\t", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("1. %s\t", strnstr("lorem ipsum dolor sit lorem ipsum dolor", "lorem", 15));
	printf("1. %s\n", ft_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "lorem", 15));
	return (0);
}
