/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/27 14:04:18 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/07 17:02:45 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		size;
	long	i;

	i = n;
	size = ft_intlen(i);
	if (!(res = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (i < 0)
		i = i * -1;
	res[size] = '\0';
	while (--size >= 0)
	{
		res[size] = (i % 10) + '0';
		i = i / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
