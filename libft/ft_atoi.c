/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jde-mour <jerome@demourgues.com>           +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/29 14:23:34 by jde-mour     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/29 17:07:05 by jde-mour    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int				i;
	long long int	res;
	long long int	neg;

	i = 0;
	neg = 1;
	res = 0;
	while (nptr[i] == 32 || (nptr[i] > 8 && nptr[i] < 14))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	while (nptr[i])
	{
		if (nptr[i] < '0' || nptr[i] > '9')
			return (res * neg);
		else
			res = (res * 10) + (long long int)(nptr[i] - '0');
		i++;
	}
	return (res * neg);
}
