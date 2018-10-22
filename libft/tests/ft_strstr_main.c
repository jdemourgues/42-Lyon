#include "libft.h"

int		main(void)
{
	printf("1. %s\t", strstr("lorem ipsum dolor sit amet", "lorem"));
	printf("1. %s\n", ft_strstr("lorem ipsum dolor sit amet", "lorem"));
	printf("1. %s\t", strstr("lorem ipsum dolor sit amet", "ipsum"));
	printf("1. %s\n", ft_strstr("lorem ipsum dolor sit amet", "ipsum"));
	printf("1. %s\t", strstr("lorem ipsum dolor sit lorem ipsum dolor", "lorem"));
	printf("1. %s\n", ft_strstr("lorem ipsum dolor sit lorem ipsum dolor", "lorem"));
	printf("1. %s\t", strstr("lorem ipsum dolor sit amet", ""));
	printf("1. %s\n", ft_strstr("lorem ipsum dolor sit amet", ""));
	printf("1. %s\t", strstr("lorem ipsum dolor sit amet", "ipsumm"));
	printf("1. %s\n", ft_strstr("lorem ipsum dolor sit amet", "ipsumm"));
	printf("1. %s\t", strstr("lorem ipsum dolor sit amet", "dol"));
	printf("1. %s\n", ft_strstr("lorem ipsum dolor sit amet", "dol"));
	printf("1. %s\t", strstr("lorem ipsum dolor sit amet", "consectetur"));
	printf("1. %s\n", ft_strstr("lorem ipsum dolor sit amet", "consectetur"));
	return (0);
}
