#include "libft.h"

int		main(void)
{
	printf("1. %s\t", strchr("Lorem ipsum", 'o'));
	printf("1. %s\n", ft_strchr("Lorem ipsum", 'o'));
	printf("2. %s\t", strchr("", 'o'));
	printf("2. %s\n", ft_strchr("", 'o'));
	printf("3. %s\t", strchr("\0", 'o'));
	printf("3. %s\n", ft_strchr("\0", 'o'));
	printf("4. %s\t", strchr("Lorem ipsum", -12));
	printf("4. %s\n", ft_strchr("Lorem ipsum", -12));
	printf("5. %s\t", strchr("Lorem ipsum", 0));
	printf("5. %s\n", ft_strchr("Lorem ipsum", 0));
	printf("6. %s\t", strchr("Lorem ipsum", 103));
	printf("6. %s\n", ft_strchr("Lorem ipsum", 103));
	printf("7. %s\t", strchr("Lorem ipsum", '\0'));
	printf("7. %s\n", ft_strchr("Lorem ipsum", '\0'));
	printf("8. %s\t", strchr("", '\0'));
	printf("8. %s\n", ft_strchr("", '\0'));
	return (0);
}
