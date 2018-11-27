/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_words_count.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/26 12:07:21 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/26 17:44:17 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_words_count(const char *str, char c)
{
	int	res;
	int i;

	if (!str)
		return (0);
	i = 0;
	res = 1;
	while (str[i])
	{
		if ((i == 0 && str[i] != c) || (str[i - 1] == c && str[i] != c))
			res++;
		i++;
	}
	if (str[0] != '\0')
		res--;
	return (res);
}
