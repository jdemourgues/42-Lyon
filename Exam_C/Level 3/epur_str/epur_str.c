/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   epur_str.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/12 16:54:19 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/12 19:03:28 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

int		is_sep(char c) {
	if (c == 32 || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

int		main(int ac, char **av) {
	int i;
	char *s;

	if (ac != 2) {
		ft_putchar('\n');
		return 0;
	}

	i = 0;
	s = av[1];
	while (s[i]) {
		while(is_sep(s[i]))
			i++;
		while(!is_sep(s[i])){
		}
			ft_putchar(s[i]);
			i++;
		}
		else if (is_sep(s[i])) {
			while(is_sep(s[i]))
				i++;
			ft_putchar(' ');
		}
	}
	ft_putchar('\n');
	return 0;
}
