#include "libft.h"

int		main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		printf("1. %d\t", isalpha(i));
		i++;
	}
	printf("\n");
	i = 'a';
	{
		printf("2. %d\t", ft_isalpha(i));
		i++;
	}
	printf("\n");
	return (0);
}
