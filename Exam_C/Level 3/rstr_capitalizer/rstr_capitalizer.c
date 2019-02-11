/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rstr_capitalizer.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/11 16:31:30 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/11 19:07:52 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c) {
	write (1, &c, 1);
}

int		is_sep(char c) {
	if (c == ' ' || (c >= 9 && c <= 13))
		return 1;
	else
		return 0;
}

void ft_rstr_capitaliser(char *str)	{
	int i;

	i = 0;
	while (str[i] && str[i + 1])	{
		printf("%c\n", str[i]);
		while (!is_sep(str[i +1]) || str[i + 1] != '\0') {
			if (str[i] >= 'A' && str[i] <= 'Z')
				ft_putchar(str[i] + 32);
			else
				ft_putchar(str[i]);
			i++;
		}
//		if (str[i] >= 'a' && str[i] <= 'z')
//			ft_putchar(str[i] - 32);
//		else
//			ft_putchar(str[i]);
		i++;
	}
}


int		main(int argc, char **argv) {
	int i;

	if (argc < 2)	{
		write(1, "\n", 1);
		return 0;
	}

	i = 1;
	while ( i <  argc )	{
		ft_rstr_capitaliser(argv[i]);
		write (1, "\n", 1);
		i++;
	}

	return 0;
}
