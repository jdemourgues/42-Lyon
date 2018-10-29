#include "libft.h"

int		main(void)
{
	printf("1. %d\t", atoi("0"));
	printf("1. %d\n", ft_atoi("0"));
	printf("2. %d\t", atoi("546:6"));
	printf("2. %d\n", ft_atoi("546:6"));
	printf("3. %d\t", atoi("-4886"));
	printf("3. %d\n", ft_atoi("-4886"));
	printf("4. %d\t", atoi("+548"));
	printf("4. %d\n", ft_atoi("+548"));
	printf("5. %d\t", atoi("054854"));
	printf("5. %d\n", ft_atoi("054854"));
	printf("6. %d\t", atoi("000074"));
	printf("6. %d\n", ft_atoi("000074"));
	printf("7. %d\t", atoi("+-54"));
	printf("7. %d\n", ft_atoi("+-54"));
	printf("8. %d\t", atoi("-+48"));
	printf("8. %d\n", ft_atoi("-+48"));
	printf("9. %d\t", atoi("--47"));
	printf("9. %d\n", ft_atoi("--47"));
	printf("10. %d\t", atoi("++47"));
	printf("10. %d\n", ft_atoi("++47"));
	printf("11. %d\t", atoi("+47+5"));
	printf("11. %d\n", ft_atoi("+47+5"));
	printf("12. %d\t", atoi("-47-5"));
	printf("12. %d\n", ft_atoi("-47-5"));
	printf("13. %d\t", atoi("\e475"));
	printf("13. %d\n", ft_atoi("\e475"));
	printf("14. %d\t", atoi("\t\n\r\v\f 469 \n"));
	printf("14. %d\n", ft_atoi("\t\n\r\v\f 469 \n"));
	printf("15. %d\t", atoi("-2147483648"));
	printf("15. %d\n", ft_atoi("-2147483648"));
	printf("16. %d\t", atoi("2147483647"));
	printf("16. %d\n", ft_atoi("2147483647"));
	printf("17. %d\t", atoi("\t\n\r\v\fd469 \n"));
	printf("17. %d\n", ft_atoi("\t\n\r\v\fd469 \n"));
	printf("18. %d\t", atoi("\n\n\n -46\b9 \n5d6"));
	printf("18. %d\n", ft_atoi("\n\n\n -46\b9 \n5d6"));
	printf("19. %d\t", atoi(""));
	printf("19. %d\n", ft_atoi(""));
	return (0);
}
