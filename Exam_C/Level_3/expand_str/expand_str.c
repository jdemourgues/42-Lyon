/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   expand_str.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/08 16:43:48 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/08 17:59:31 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		is_sep(char c) {
	if (c == ' ' || (c >= 9 && c <= 13))
		return 1;
	else 
		return 0;
}

void	ft_expand_str(char *str) {
	int i;

	i = 0;
	while (str[i] && is_sep(str[i]))
		i++;
	while(str[i] && str[i] != '\n') {
		if(!is_sep(str[i])) 
			write(1, &str[i], 1);
		else {
			while(is_sep(str[i]))
				i++;
			if(!str[i]) {
				return;
			}
			else {
				write(1, "   ", 3);
				i--;
			}
		}
		i++;
	}
	i++;
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_expand_str(argv[1]);
	write(1,"\n", 1);
	return 0;
}
