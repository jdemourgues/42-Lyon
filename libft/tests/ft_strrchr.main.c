#include "libft.h"

int		main(void)
{
	printf("1. %s\t", strrchr("Lorem ipsom", 'o'));
	printf("1. %s\n", ft_strrchr("Lorom ipsom", 'o'));
	printf("2. %s\t", strrchr("", 'o'));
	printf("2. %s\n", ft_strrchr("", 'o'));
	printf("3. %s\t", strrchr("\0", 'o'));
	printf("3. %s\n", ft_strrchr("\0", 'o'));
	printf("4. %s\t", strrchr("Lorem ipsum", -12));
	printf("4. %s\n", ft_strrchr("Lorem ipsum", -12));
	printf("5. %s\t", strrchr("Lorem ipsum", 0));
	printf("5. %s\n", ft_strrchr("Lorem ipsum", 0));
	printf("6. %s\t", strrchr("Lorem ipsum", 103));
	printf("6. %s\n", ft_strrchr("Lorem ipsum", 103));
	printf("7. %s\t", strrchr("Lorem ipsum", '\0'));
	printf("7. %s\n", ft_strrchr("Lorem ipsum", '\0'));
	printf("8. %s\t", strrchr("", '\0'));
	printf("8. %s\n", ft_strrchr("", '\0'));
	return (0);
}
