/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   str_capitalizer.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/05 15:11:06 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/05 18:42:11 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

int		ft_is_sep(char c)
{
	if ((c > 8 && c < 13) || c == 32)
		return (1);
	else
		return (0);
}

void	ft_str_capitalizer(char *str)
{
	int	i;

	i = 0;
	if (str[i] > 'a' && str[i] < 'z')
		str[i] = str[i] - 32;
	ft_putchar(str[i]);
	i = i + 1;

	while (str[i]) {
	if ((str[i] >= 'a' && str[i] <= 'z') && ft_is_sep(str[i - 1]))
		str[i] = str[i] - 32;
	else if ((str[i] >= 'A' && str[i] <= 'Z') && !ft_is_sep(str[i - 1]))
		str[i] = str[i] + 32;
	ft_putchar(str[i]);
	i++;
	}
}

int		main(int argc, char **argv) {
	int i;

	i = 1;
	while (i < argc) {
		ft_str_capitalizer(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return(0);
}
